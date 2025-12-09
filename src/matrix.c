#include <main.h>
#include <keyboard.h>
#include <string.h>

                           
void scan_matrix(NkroReport_t* report) {
    // clear report
    report->modifiers = 0;
    memset(report->keys, 0, sizeof(report->keys));

    for(int r = 0; r < ROWS; r++) {
        // sets a row low
        HAL_GPIO_WritePin(row_ports[r], row_pins[r], GPIO_PIN_RESET);
        for(int c = 0; c < COLS; c++) {
            // if key active low
            if(HAL_GPIO_ReadPin(col_ports[c], col_pins[c]) == GPIO_PIN_RESET) {
                uint8_t keycode = keymap[r][c];
                // add keycode to report

                if(keycode >= 0xE0 && keycode <= 0xE7) {
                    // map 0xE0-E7 to modifier bits 0-7
                    // report->modifiers gets a 1 left shifted in by (offset = keycode - 0xE0)
                    report->modifiers |= (1 << (keycode - 0xE0));
                } 
                
                else if(keycode != HID_KEY_NONE) {
                    // regular key
                    uint8_t index = keycode / 8; // gets the byte index in the keys array
                    uint8_t bit = keycode % 8; // gets the bit position within that byte
                    report->keys[index] |= (1 << bit); // sets the corresponding bit at the correct byte
                }
            }
        }
        // set row high again
        HAL_GPIO_WritePin(row_ports[r], row_pins[r], GPIO_PIN_SET);
    }
}