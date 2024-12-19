/*
 * Copyright (c) 2021 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_ESP32S2_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_ESP32S2_H_

/* Supported CPU clock Sources */
#define ESP32_CPU_CLK_SRC_XTAL 0U
#define ESP32_CPU_CLK_SRC_PLL  1U
#define ESP32_CLK_SRC_RC_FAST  2U
#define ESP32_CLK_SRC_APLL_CLK 3U

/* Supported PLL CPU frequencies */
#define ESP32_CLK_CPU_PLL_80M     80000000
#define ESP32_CLK_CPU_PLL_160M    160000000
#define ESP32_CLK_CPU_PLL_240M    240000000
#define ESP32_CLK_CPU_RC_FAST_FREQ 8500000

/* Supported XTAL frequencies */
#define ESP32_CLK_XTAL_40M 40000000

/* Supported RTC fast clock sources */
#define ESP32_RTC_FAST_CLK_SRC_XTAL_D4 0
#define ESP32_RTC_FAST_CLK_SRC_RC_FAST 1

/* Supported RTC slow clock sources */
#define ESP32_RTC_SLOW_CLK_SRC_RC_SLOW      0
#define ESP32_RTC_SLOW_CLK_SRC_XTAL32K      1
#define ESP32_RTC_SLOW_CLK_SRC_RC_FAST_D256 2
#define ESP32_RTC_SLOW_CLK_32K_EXT_OSC      9

/* RTC slow clock frequencies */
#define ESP32_RTC_SLOW_CLK_SRC_RC_SLOW_FREQ      90000
#define ESP32_RTC_SLOW_CLK_SRC_XTAL32K_FREQ      32768
#define ESP32_RTC_SLOW_CLK_SRC_RC_FAST_D256_FREQ 33203

/* Modules IDs
 * These IDs are actually offsets in CLK and RST Control registers.
 * These IDs shouldn't be changed unless there is a Hardware change
 * from Espressif.
 *
 * Basic Modules
 * Registers: DPORT_PERIP_CLK_EN_REG, DPORT_PERIP_RST_EN_REG
 */
#define ESP32_LEDC_MODULE              0
#define ESP32_UART0_MODULE             1
#define ESP32_UART1_MODULE             2
#define ESP32_USB_MODULE               3
#define ESP32_I2C0_MODULE              4
#define ESP32_I2C1_MODULE              5
#define ESP32_I2S0_MODULE              6
#define ESP32_TIMG0_MODULE             7
#define ESP32_TIMG1_MODULE             8
#define ESP32_UHCI0_MODULE             9
#define ESP32_UHCI1_MODULE             10
#define ESP32_RMT_MODULE               11
#define ESP32_PCNT_MODULE              12
#define ESP32_SPI_MODULE               13
#define ESP32_FSPI_MODULE              14
#define ESP32_HSPI_MODULE              15
#define ESP32_SPI2_DMA_MODULE          16
#define ESP32_SPI3_DMA_MODULE          17
#define ESP32_TWAI_MODULE              18
#define ESP32_RNG_MODULE               19
#define ESP32_WIFI_MODULE              20
#define ESP32_WIFI_BT_COMMON_MODULE    21
#define ESP32_SYSTIMER_MODULE          22
#define ESP32_AES_MODULE               23
#define ESP32_SHA_MODULE               24
#define ESP32_RSA_MODULE               25
#define ESP32_CRYPTO_DMA_MODULE        26
#define ESP32_AES_DMA_MODULE           27
#define ESP32_SHA_DMA_MODULE           28
#define ESP32_DEDIC_GPIO_MODULE        29
#define ESP32_PERIPH_SARADC_MODULE     30
#define ESP32_MODULE_MAX               31

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_ESP32S2_H_ */
