/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define seg7_a_Pin GPIO_PIN_0
#define seg7_a_GPIO_Port GPIOA
#define seg7_b_Pin GPIO_PIN_1
#define seg7_b_GPIO_Port GPIOA
#define seg7_c_Pin GPIO_PIN_2
#define seg7_c_GPIO_Port GPIOA
#define seg7_d_Pin GPIO_PIN_3
#define seg7_d_GPIO_Port GPIOA
#define seg7_e_Pin GPIO_PIN_4
#define seg7_e_GPIO_Port GPIOA
#define LED_RED_VER1_Pin GPIO_PIN_5
#define LED_RED_VER1_GPIO_Port GPIOA
#define LED_YELLOW_VER1_Pin GPIO_PIN_6
#define LED_YELLOW_VER1_GPIO_Port GPIOA
#define LED_GREEN_VER1_Pin GPIO_PIN_7
#define LED_GREEN_VER1_GPIO_Port GPIOA
#define LED_RED_HOR1_Pin GPIO_PIN_10
#define LED_RED_HOR1_GPIO_Port GPIOB
#define LED_YELLOW_HOR1_Pin GPIO_PIN_11
#define LED_YELLOW_HOR1_GPIO_Port GPIOB
#define LED_GREEN_HOR1_Pin GPIO_PIN_12
#define LED_GREEN_HOR1_GPIO_Port GPIOB
#define LED_RED_HOR2_Pin GPIO_PIN_13
#define LED_RED_HOR2_GPIO_Port GPIOB
#define LED_YELLOW_HOR2_Pin GPIO_PIN_14
#define LED_YELLOW_HOR2_GPIO_Port GPIOB
#define LED_GREEN_HOR2_Pin GPIO_PIN_15
#define LED_GREEN_HOR2_GPIO_Port GPIOB
#define LED_RED_VER2_Pin GPIO_PIN_8
#define LED_RED_VER2_GPIO_Port GPIOA
#define LED_YELLOW_VER2_Pin GPIO_PIN_9
#define LED_YELLOW_VER2_GPIO_Port GPIOA
#define LED_GREEN_VER2_Pin GPIO_PIN_10
#define LED_GREEN_VER2_GPIO_Port GPIOA
#define seg7_f_Pin GPIO_PIN_13
#define seg7_f_GPIO_Port GPIOA
#define seg7_g_Pin GPIO_PIN_14
#define seg7_g_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
