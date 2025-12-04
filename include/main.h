/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ROW_3_Pin GPIO_PIN_0
#define ROW_3_GPIO_Port GPIOA
#define ROW_2_Pin GPIO_PIN_1
#define ROW_2_GPIO_Port GPIOA
#define ROW_1_Pin GPIO_PIN_2
#define ROW_1_GPIO_Port GPIOA
#define COL_15_Pin GPIO_PIN_3
#define COL_15_GPIO_Port GPIOA
#define COL_14_Pin GPIO_PIN_4
#define COL_14_GPIO_Port GPIOA
#define COL_1_Pin GPIO_PIN_7
#define COL_1_GPIO_Port GPIOA
#define COL_2_Pin GPIO_PIN_0
#define COL_2_GPIO_Port GPIOB
#define COL_3_Pin GPIO_PIN_1
#define COL_3_GPIO_Port GPIOB
#define COL_4_Pin GPIO_PIN_2
#define COL_4_GPIO_Port GPIOB
#define COL_5_Pin GPIO_PIN_10
#define COL_5_GPIO_Port GPIOB
#define COL_6_Pin GPIO_PIN_11
#define COL_6_GPIO_Port GPIOB
#define COL_7_Pin GPIO_PIN_12
#define COL_7_GPIO_Port GPIOB
#define COL_8_Pin GPIO_PIN_13
#define COL_8_GPIO_Port GPIOB
#define COL_9_Pin GPIO_PIN_14
#define COL_9_GPIO_Port GPIOB
#define COL_10_Pin GPIO_PIN_15
#define COL_10_GPIO_Port GPIOB
#define COL_11_Pin GPIO_PIN_8
#define COL_11_GPIO_Port GPIOA
#define COL_12_Pin GPIO_PIN_9
#define COL_12_GPIO_Port GPIOA
#define COL_13_Pin GPIO_PIN_10
#define COL_13_GPIO_Port GPIOA
#define ROW_0_Pin GPIO_PIN_15
#define ROW_0_GPIO_Port GPIOA
#define COL_0_Pin GPIO_PIN_3
#define COL_0_GPIO_Port GPIOB
#define ROW_5_Pin GPIO_PIN_4
#define ROW_5_GPIO_Port GPIOB
#define ROW_4_Pin GPIO_PIN_5
#define ROW_4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
