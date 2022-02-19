/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#define TRIG_Pin GPIO_PIN_0
#define TRIG_GPIO_Port GPIOC
#define Echo_Pin GPIO_PIN_1
#define Echo_GPIO_Port GPIOC
#define Echo_EXTI_IRQn EXTI1_IRQn
#define KEY_Pin GPIO_PIN_2
#define KEY_GPIO_Port GPIOC
#define BEEP_Pin GPIO_PIN_3
#define BEEP_GPIO_Port GPIOC
#define RIGHT_MOTOR_GO_Pin GPIO_PIN_4
#define RIGHT_MOTOR_GO_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOA
#define LED_D4_Pin GPIO_PIN_6
#define LED_D4_GPIO_Port GPIOA
#define SEARCH_R_Pin GPIO_PIN_7
#define SEARCH_R_GPIO_Port GPIOA
#define SEARCH_L_Pin GPIO_PIN_0
#define SEARCH_L_GPIO_Port GPIOB
#define AVOID_RIGHT_Pin GPIO_PIN_1
#define AVOID_RIGHT_GPIO_Port GPIOB
#define AVOID_LFET_Pin GPIO_PIN_8
#define AVOID_LFET_GPIO_Port GPIOA
#define LED_D3_Pin GPIO_PIN_6
#define LED_D3_GPIO_Port GPIOB
#define LEFT_MOTOR_GO_Pin GPIO_PIN_7
#define LEFT_MOTOR_GO_GPIO_Port GPIOB
#define LEFT_MOTOR_PWM_Pin GPIO_PIN_8
#define LEFT_MOTOR_PWM_GPIO_Port GPIOB
#define RIGHT_MOTOR_PWM_Pin GPIO_PIN_9
#define RIGHT_MOTOR_PWM_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
