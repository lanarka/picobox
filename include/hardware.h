/*
    PICOBOX - Board Version: 1.1
    Hardware Board/Pinouts definition
*/

#ifndef __HARDWARE_H__
#define __HARDWARE_H__

// PORTS
#define PORT_ETHSD      spi1
#define PORT_RADIO      spi0
#define PORT_UART1      uart0
#define PORT_UART2      uart1
#define PORT_I2C        i2c1
#define PORT_I2C_SLAVE  i2c0

// PINS
#define PIN_UART1_TX    0   // UART 1
#define PIN_UART1_RX    1

#define PIN_I2C_DAT     2   // MAIN I2C BUS
#define PIN_I2C_CLK     3

#define PIN_D0          4   // DIGITAL I/O

#define PIN_LED         5   // STATUS LED
#define PIN_BUZZER      6   // BUZZER

#define PIN_SD_CS       7   // SD CARD

#define PIN_UART2_TX    8   // UART 2 OR SLAvE I2C BUS
#define PIN_UART2_RX    9

#define PIN_D1          10  // DIGITAL I/O
#define PIN_D2          11

#define PIN_ETHSD_MISO  12  // ETHERNET+SDCARD

#define PIN_D3          13  // DIGITAL I/O

#define PIN_ETHSD_SCK   14  // ETHERNET
#define PIN_ETHSD_MOSI  15

#define PIN_RADIO_MISO  16  // RADIO
#define PIN_RADIO_CSN   17
#define PIN_RADIO_SCK   18
#define PIN_RADIO_MOSI  19
#define PIN_RADIO_CE    20

#define PIN_ETH_CS      21  // ETHERNET

#define PIN_BUTTON      22  // FUNC BUTTON

#define PIN_A0          26  // I/O (Analogs)
#define PIN_A1          27
#define PIN_A2          28

#endif
