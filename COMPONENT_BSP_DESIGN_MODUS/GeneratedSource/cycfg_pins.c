/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.2.1.3335
* xmclib 0.5.0.174
* personalities 3.0.0.0
* udd 3.0.0.788
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
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

#include "cycfg_pins.h"

const XMC_GPIO_CONFIG_t CYBSP_XTAL1_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_XTAL1_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t CYBSP_XTAL2_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_XTAL2_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t CYBSP_USER_LED_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_USER_LED_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_HIGH,
};
const XMC_GPIO_CONFIG_t CYBSP_USER_LED2_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_USER_LED2_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_HIGH,
};
const XMC_GPIO_CONFIG_t CYBSP_USER_LED3_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_USER_LED3_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_HIGH,
};
const XMC_GPIO_CONFIG_t CYBSP_USER_LED4_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_USER_LED4_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_HIGH,
};


void init_cycfg_pins(void)
{
	XMC_GPIO_Init(CYBSP_USER_LED_PORT, CYBSP_USER_LED_PIN, &CYBSP_USER_LED_config);
	XMC_GPIO_SetHardwareControl(CYBSP_USER_LED_PORT, CYBSP_USER_LED_PIN, CYBSP_USER_LED_HWCTRL);

	XMC_GPIO_Init(CYBSP_USER_LED2_PORT, CYBSP_USER_LED2_PIN, &CYBSP_USER_LED2_config);
	XMC_GPIO_SetHardwareControl(CYBSP_USER_LED2_PORT, CYBSP_USER_LED2_PIN, CYBSP_USER_LED2_HWCTRL);

	XMC_GPIO_Init(CYBSP_USER_LED3_PORT, CYBSP_USER_LED3_PIN, &CYBSP_USER_LED3_config);
	XMC_GPIO_SetHardwareControl(CYBSP_USER_LED3_PORT, CYBSP_USER_LED3_PIN, CYBSP_USER_LED3_HWCTRL);

	XMC_GPIO_Init(CYBSP_USER_LED4_PORT, CYBSP_USER_LED4_PIN, &CYBSP_USER_LED4_config);
	XMC_GPIO_SetHardwareControl(CYBSP_USER_LED4_PORT, CYBSP_USER_LED4_PIN, CYBSP_USER_LED4_HWCTRL);
}
