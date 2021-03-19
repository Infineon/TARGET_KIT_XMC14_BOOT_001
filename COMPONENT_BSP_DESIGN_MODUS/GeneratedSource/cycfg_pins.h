/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.3.0.3651
* mtb-xmclib-cat3 3.0.0.276
* personalities 5.0.0.0
* udd 3.0.0.905
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "xmc_gpio.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_XTAL1_ENABLED 1U
#define CYBSP_XTAL1_PORT XMC_GPIO_PORT0
#define CYBSP_XTAL1_PORT_NUM 0U
#define CYBSP_XTAL1_PIN 10U
#ifndef ioss_0_port_0_pin_10_ALT
	#define ioss_0_port_0_pin_10_ALT 0U
#endif
#define CYBSP_XTAL1_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_0_pin_10_ALT)
#ifndef ioss_0_port_0_pin_10_HWCTRL
	#define ioss_0_port_0_pin_10_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_XTAL1_HWCTRL ioss_0_port_0_pin_10_HWCTRL
#define CYBSP_XTAL2_ENABLED 1U
#define CYBSP_XTAL2_PORT XMC_GPIO_PORT0
#define CYBSP_XTAL2_PORT_NUM 0U
#define CYBSP_XTAL2_PIN 11U
#ifndef ioss_0_port_0_pin_11_ALT
	#define ioss_0_port_0_pin_11_ALT 0U
#endif
#define CYBSP_XTAL2_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_0_pin_11_ALT)
#ifndef ioss_0_port_0_pin_11_HWCTRL
	#define ioss_0_port_0_pin_11_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_XTAL2_HWCTRL ioss_0_port_0_pin_11_HWCTRL
#define CYBSP_SWDIO_PORT XMC_GPIO_PORT0
#define CYBSP_SWDIO_PORT_NUM 0U
#define CYBSP_SWDIO_PIN 14U
#define CYBSP_SWDCK_PORT XMC_GPIO_PORT0
#define CYBSP_SWDCK_PORT_NUM 0U
#define CYBSP_SWDCK_PIN 15U
#define CYBSP_RTC_XTAL1_PORT XMC_GPIO_PORT0
#define CYBSP_RTC_XTAL1_PORT_NUM 0U
#define CYBSP_RTC_XTAL1_PIN 8U
#define CYBSP_RTC_XTAL2_PORT XMC_GPIO_PORT0
#define CYBSP_RTC_XTAL2_PORT_NUM 0U
#define CYBSP_RTC_XTAL2_PIN 9U
#define CYBSP_DEBUG_UART_TX_PORT XMC_GPIO_PORT1
#define CYBSP_DEBUG_UART_TX_PORT_NUM 1U
#define CYBSP_DEBUG_UART_TX_PIN 2U
#define CYBSP_DEBUG_UART_RX_PORT XMC_GPIO_PORT1
#define CYBSP_DEBUG_UART_RX_PORT_NUM 1U
#define CYBSP_DEBUG_UART_RX_PIN 3U
#define CYBSP_POT_PORT XMC_GPIO_PORT2
#define CYBSP_POT_PORT_NUM 2U
#define CYBSP_POT_PIN 5U
#define CYBSP_USER_LED_ENABLED 1U
#define CYBSP_USER_LED1_ENABLED CYBSP_USER_LED_ENABLED
#define CYBSP_USER_LED_PORT XMC_GPIO_PORT4
#define CYBSP_USER_LED1_PORT CYBSP_USER_LED_PORT
#define CYBSP_USER_LED_PORT_NUM 4U
#define CYBSP_USER_LED1_PORT_NUM CYBSP_USER_LED_PORT_NUM
#define CYBSP_USER_LED_PIN 0U
#define CYBSP_USER_LED1_PIN CYBSP_USER_LED_PIN
#ifndef ioss_0_port_4_pin_0_ALT
	#define ioss_0_port_4_pin_0_ALT 0U
#endif
#define CYBSP_USER_LED_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_4_pin_0_ALT)
#define CYBSP_USER_LED1_MODE CYBSP_USER_LED_MODE
#ifndef ioss_0_port_4_pin_0_HWCTRL
	#define ioss_0_port_4_pin_0_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_LED_HWCTRL ioss_0_port_4_pin_0_HWCTRL
#define CYBSP_USER_LED1_HWCTRL CYBSP_USER_LED_HWCTRL
#define CYBSP_USER_LED2_ENABLED 1U
#define CYBSP_USER_LED2_PORT XMC_GPIO_PORT4
#define CYBSP_USER_LED2_PORT_NUM 4U
#define CYBSP_USER_LED2_PIN 1U
#ifndef ioss_0_port_4_pin_1_ALT
	#define ioss_0_port_4_pin_1_ALT 0U
#endif
#define CYBSP_USER_LED2_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_4_pin_1_ALT)
#ifndef ioss_0_port_4_pin_1_HWCTRL
	#define ioss_0_port_4_pin_1_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_LED2_HWCTRL ioss_0_port_4_pin_1_HWCTRL
#define CYBSP_USER_LED3_ENABLED 1U
#define CYBSP_USER_LED3_PORT XMC_GPIO_PORT4
#define CYBSP_USER_LED3_PORT_NUM 4U
#define CYBSP_USER_LED3_PIN 2U
#ifndef ioss_0_port_4_pin_2_ALT
	#define ioss_0_port_4_pin_2_ALT 0U
#endif
#define CYBSP_USER_LED3_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_4_pin_2_ALT)
#ifndef ioss_0_port_4_pin_2_HWCTRL
	#define ioss_0_port_4_pin_2_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_LED3_HWCTRL ioss_0_port_4_pin_2_HWCTRL
#define CYBSP_USER_LED4_ENABLED 1U
#define CYBSP_USER_LED4_PORT XMC_GPIO_PORT4
#define CYBSP_USER_LED4_PORT_NUM 4U
#define CYBSP_USER_LED4_PIN 3U
#ifndef ioss_0_port_4_pin_3_ALT
	#define ioss_0_port_4_pin_3_ALT 0U
#endif
#define CYBSP_USER_LED4_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_4_pin_3_ALT)
#ifndef ioss_0_port_4_pin_3_HWCTRL
	#define ioss_0_port_4_pin_3_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_LED4_HWCTRL ioss_0_port_4_pin_3_HWCTRL

extern const XMC_GPIO_CONFIG_t CYBSP_XTAL1_config;
extern const XMC_GPIO_CONFIG_t CYBSP_XTAL2_config;
extern const XMC_GPIO_CONFIG_t CYBSP_USER_LED_config;
#define CYBSP_USER_LED1_config CYBSP_USER_LED_config
extern const XMC_GPIO_CONFIG_t CYBSP_USER_LED2_config;
extern const XMC_GPIO_CONFIG_t CYBSP_USER_LED3_config;
extern const XMC_GPIO_CONFIG_t CYBSP_USER_LED4_config;

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
