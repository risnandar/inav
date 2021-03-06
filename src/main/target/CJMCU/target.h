/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "CJM1" // CJMCU
#define USE_HARDWARE_REVISION_DETECTION

#define LED0
#define LED0_GPIO GPIOC
#define LED0_PIN Pin_14 // PC14 (LED)
#define LED0_PERIPHERAL RCC_APB2Periph_GPIOC

#define LED1
#define LED1_GPIO GPIOC
#define LED1_PIN Pin_13 // PC13 (LED)
#define LED1_PERIPHERAL RCC_APB2Periph_GPIOC

#define LED2
#define LED2_GPIO GPIOC
#define LED2_PIN Pin_15 // PC15 (LED)
#define LED2_PERIPHERAL RCC_APB2Periph_GPIOC


#define ACC
#define USE_ACC_MPU6050

#define GYRO
#define USE_GYRO_MPU6050

#define MAG
#define USE_MAG_HMC5883

#define BRUSHED_MOTORS

#define USE_USART1
#define USE_USART2

#define SERIAL_PORT_COUNT 2

#define USE_I2C
#define I2C_DEVICE (I2CDEV_1)

// #define SOFT_I2C // enable to test software i2c
// #define SOFT_I2C_PB1011 // If SOFT_I2C is enabled above, need to define pinout as well (I2C1 = PB67, I2C2 = PB1011)
// #define SOFT_I2C_PB67

#define SPEKTRUM_BIND
// USART2, PA3
#define BIND_PORT  GPIOA
#define BIND_PIN   Pin_3

#define DEFAULT_RX_FEATURE FEATURE_RX_PPM

// Since the CJMCU PCB has holes for 4 motors in each corner we can save same flash space by disabling support for other mixers.
#define USE_QUAD_MIXER_ONLY
#undef USE_SERVOS

#if (FLASH_SIZE <= 64)
#undef BLACKBOX
#define SKIP_TASK_STATISTICS
#endif

#undef BEEPER
#undef SKIP_RX_MSP

//#undef USE_CLI

#define USED_TIMERS         (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4))

#define TIMER_APB1_PERIPHERALS (RCC_APB1Periph_TIM2 | RCC_APB1Periph_TIM3 | RCC_APB1Periph_TIM4)
#define TIMER_APB2_PERIPHERALS (RCC_APB2Periph_TIM1 | RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB)

