/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017, 2020, 2023, 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_debug_console.h"
#include "board.h"
#include "app.h"
#include "fsl_pint.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#ifndef EXAMPLE_PINT_BASE
#define EXAMPLE_PINT_BASE PINT
#endif

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

/*!
 * @brief Call back for PINT Pin interrupt 0-7.
 */
void pint_intr_callback(pint_pin_int_t pintr, pint_status_t *status)
{
    PRINTF("\f\r\nPINT Pin Interrupt %d event detected.", pintr);
}

/*!
 * @brief Main function
 */
int main(void)
{
    /* Board pin, clock, debug console init */
    BOARD_InitHardware();

    /* Clear screen*/
    PRINTF("%c[2J", 27);
    /* Set cursor location at [0,0] */
    PRINTF("%c[0;0H", 27);
    PRINTF("\f\r\nPINT Pin interrupt example\r\n");

    /* Initialize PINT */
    PINT_Init(EXAMPLE_PINT_BASE);

#if (defined(PINT_USE_LEGACY_CALLBACK) && (PINT_USE_LEGACY_CALLBACK == 0))
    PINT_SetCallback(EXAMPLE_PINT_BASE, pint_intr_callback);
#endif

    /* Setup Pin Interrupt 0 for rising edge */
#if (defined(PINT_USE_LEGACY_CALLBACK) && PINT_USE_LEGACY_CALLBACK)
    PINT_PinInterruptConfig(EXAMPLE_PINT_BASE, kPINT_PinInt0, kPINT_PinIntEnableRiseEdge, pint_intr_callback);
#else
    PINT_PinInterruptConfig(EXAMPLE_PINT_BASE, kPINT_PinInt0, kPINT_PinIntEnableRiseEdge);
#endif
    /* Enable callbacks for PINT0 by Index */
    PINT_EnableCallbackByIndex(EXAMPLE_PINT_BASE, kPINT_PinInt0);

#if (DEMO_PIN_NUM > 1U)
#if (defined(PINT_USE_LEGACY_CALLBACK) && PINT_USE_LEGACY_CALLBACK)
    /* Setup Pin Interrupt 1 for falling edge */
    PINT_PinInterruptConfig(EXAMPLE_PINT_BASE, kPINT_PinInt1, kPINT_PinIntEnableFallEdge, pint_intr_callback);
#else
    PINT_PinInterruptConfig(EXAMPLE_PINT_BASE, kPINT_PinInt1, kPINT_PinIntEnableRiseEdge);
#endif
    /* Enable callbacks for PINT1 by Index */
    PINT_EnableCallbackByIndex(EXAMPLE_PINT_BASE, kPINT_PinInt1);
#endif

#if (DEMO_PIN_NUM > 2U)
#if (defined(PINT_USE_LEGACY_CALLBACK) && PINT_USE_LEGACY_CALLBACK)
    /* Setup Pin Interrupt 2 for falling edge */
    PINT_PinInterruptConfig(EXAMPLE_PINT_BASE, kPINT_PinInt2, kPINT_PinIntEnableFallEdge, pint_intr_callback);
#else
    PINT_PinInterruptConfig(EXAMPLE_PINT_BASE, kPINT_PinInt2, kPINT_PinIntEnableRiseEdge);
#endif
    /* Enable callbacks for PINT2 by Index */
    PINT_EnableCallbackByIndex(EXAMPLE_PINT_BASE, kPINT_PinInt2);
#endif

    PRINTF("\r\nPINT Pin Interrupt events are configured\r\n");
    PRINTF("\r\nPress corresponding switches to generate events\r\n");
    while (1)
    {
        __WFI();
    }
}
