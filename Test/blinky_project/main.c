/* Copyright (c) 2014 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup blinky_example_main main.c
 * @{
 * @ingroup blinky_example
 * @brief Blinky Example Application main file.
 *
 * This file contains the source code for a sample application to blink LEDs.
 *
 */

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "bsp.h"

static const uint8_t leds_list[LEDS_NUMBER] = LEDS_LIST;

/**
 * @brief Function for application main entry.
 */
int main(void)
{
    /* Configure LED-pins as outputs. */
    //LEDS_CONFIGURE(LEDS_MASK);
    nrf_gpio_cfg_output(15);
    nrf_gpio_cfg_output(19);
    /* Toggle LEDs. */
    while (true)
    {
//        for (int i = 0; i < LEDS_NUMBER; i++)
//        {
//            LEDS_INVERT(1 << leds_list[i]);
//            nrf_delay_ms(500);
//        }
        nrf_delay_ms(1000);
        nrf_gpio_pin_toggle(15);
        nrf_gpio_pin_toggle(19);
    }
}

/**
 *@}
 **/
