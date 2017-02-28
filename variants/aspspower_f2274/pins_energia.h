/*
  ************************************************************************
  *	pins_energia.h
  *
  *	Energia core files for MSP430
  *		Copyright (c) 2012 Robert Wessels. All right reserved.
  *
  *     Contribution: Adrian Studer
  *
  ***********************************************************************
  Derived from:
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#ifndef Pins_Energia_h
#define Pins_Energia_h
#ifndef BV
#define BV(x) (1 << (x))
#endif

#if defined(__MSP430_HAS_USCI__)
static const uint8_t SS      = 17;  /* P3.0 */
static const uint8_t SCK     = 16;  /* P3.3 */
static const uint8_t MOSI    = 18;  /* P3.1 */
static const uint8_t MISO    = 15;  /* P3.2 */
static const uint8_t TWISDA0 = 18;  /* P3.1 */
static const uint8_t TWISCL0 = 15;  /* P3.2 */
static const uint8_t DEBUG_UARTTXD = 24;  /* Transmit Data (TXD) at P3.4 (UCA0) */
static const uint8_t DEBUG_UARTRXD = 25;  /* Receive  Data (RXD) at P3.5 (UCA0) */
#define TWISDA0_SET_MODE (PORT_SELECTION0 | INPUT)
#define TWISCL0_SET_MODE (PORT_SELECTION0 | INPUT)
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | OUTPUT)
#define SPISCK_SET_MODE (PORT_SELECTION0)
#define SPIMOSI_SET_MODE (PORT_SELECTION0)
#define SPIMISO_SET_MODE (PORT_SELECTION0)
#endif

#define DEBUG_UART_MODULE_OFFSET 0x0
#define DEBUG_UART_MODULE 0x0

static const uint8_t A0  = 3;   // P2.0
static const uint8_t A1  = 4;   // P2.1
static const uint8_t A2  = 5;   // P2.2
static const uint8_t A3  = 6;   // P2.3
static const uint8_t A4  = 7;   // P2.4
static const uint8_t A5  = 17;  // P3.0
//static const uint8_t A6  = ?; // P3.6 not broken out
static const uint8_t A7  = 30; // P3.7 not broken out
static const uint8_t A10 = 128 + 10; // special. This is the internal temp sensor
//static const uint8_t A11 = ?; // no pin
static const uint8_t A12  = 8;  // P4.3
static const uint8_t A13  = 9;  // P4.4
static const uint8_t A14  = 10;	// P4.5
static const uint8_t A15  = 11;	// P4.6

/*
 F22x4 RF2550T pin mapping

                               +--\/--+
                          GND  |1    2| VCC
                     (A0) P2.0 |3    4| P2.1 (A1)
                     (A2) P2.2 |5    6| P2.3 (A3)
                     (A4) P2.4 |7    8| P4.3 (A12)
                    (A13) P4.4 |9   10| P4.5 (A14)
                    (A15) P4.6 |11  12| GND
            (CC2500 GDO0) P2.6 |13  14| P2.7 (CC2500 GDO2)
     (UCB0SCL) (UCB0SOMI) P3.2 |15  16| P3.3 (UCB0SCK)
                     (SS) P3.0 |17  18| P3.1 (UCB0SIMO) (UCB0SDA)
                               +------+

                                 ----+
                                   20| P1.0 (LED1 - RED)
                                   21| P1.1 (LED2 - GREEN)
                                   22| P1.2 (PUSH1)
                                   24| P3.4 (UCA0TXD -> ezFET -> Serial)
                                   25| P3.5 (UCA0RXD -> ezFET -> Serial)
                                 ----+
*/

/*
 * ASPS uses:
 * P2_1 as A1 (15V_SW1_SENSE)
 * P2_2 as digital I/O (sense_select)
 * P3_1 as SDA
 * P3_2 as SCL
 * P1_5 as digital I/O (SDO)  (-- add new --)
 * P1_4 as digital I/O (SCLK) (-- add new --)
 * P1_6 as digital I/O (LED0) (-- add new --)
 * P1_7 as digital I/O (LED1) (-- add new --) 
 * P4_0 as EN0                (-- add new --)
 * P4_1 as EN1                (-- add new --)
 * P4_2 as EN2                (-- add new --)
 * P1_2 as digital I/O (rst)
 * P1_1 unused (BSL)
 * P1_0 as digital I/O (fault)
 * P2_4 as A4 (15V_SW0_SENSE)
 * P2_3 as analog feedback
 * P3_7 as A7                 (-- add new --)
 * P3_5 as RX
 * P3_4 as TX
 * P4_7 as EN3                (-- add new --)
 * P4_6 as A15 (15V_SW3_SENSE)
 * P4_5 as A14 (15V_MONITOR)
 * P4_4 as analog opamp
 * P4_3 as analog opamp
 */
/* Pin names based on the silkscreen */

/* PIN1 = GND */
/* PIN2 = VCC */
static const uint8_t P2_0 = 3;
static const uint8_t P2_1 = 4;
static const uint8_t P2_2 = 5;
static const uint8_t P2_3 = 6;
static const uint8_t P2_4 = 7;
static const uint8_t P4_3 = 8;
static const uint8_t P4_4 = 9;
static const uint8_t P4_5 = 10;
static const uint8_t P4_6 = 11;
/* PIN12 = GND */
static const uint8_t P2_6 = 13;
static const uint8_t P2_7 = 14;
static const uint8_t P3_2 = 15;
static const uint8_t P3_3 = 16;
static const uint8_t P3_0 = 17;
static const uint8_t P3_1 = 18;

/* Extra pins not on the header + temp sensor */
static const uint8_t P1_0 = 20;
static const uint8_t P1_1 = 21;
static const uint8_t P1_2 = 22;
static const uint8_t P3_4 = 24;
static const uint8_t P3_5 = 25;

/* ASPS-Power new. We add 9 additional pins. */
static const uint8_t P1_4 = 26;
static const uint8_t P1_5 = 27;
static const uint8_t P1_6 = 28;
static const uint8_t P1_7 = 29;
static const uint8_t P3_7 = 30;
static const uint8_t P4_0 = 31;
static const uint8_t P4_1 = 32;
static const uint8_t P4_2 = 33;
static const uint8_t P4_7 = 34;

// Useful names.
static const uint8_t LED0 = 28;
static const uint8_t LED1 = 29;
static const uint8_t TEMPSENSOR = 128 + 10;

#ifdef ARDUINO_MAIN

const uint16_t port_to_input[] = {
	NOT_A_PORT,
	(uint16_t) &P1IN,
	(uint16_t) &P2IN,
	(uint16_t) &P3IN,
	(uint16_t) &P4IN
};

const uint16_t port_to_output[] = {
	NOT_A_PORT,
	(uint16_t) &P1OUT,
	(uint16_t) &P2OUT,
	(uint16_t) &P3OUT,
	(uint16_t) &P4OUT
};

const uint16_t port_to_dir[] = {
	NOT_A_PORT,
	(uint16_t) &P1DIR,
	(uint16_t) &P2DIR,
	(uint16_t) &P3DIR,
	(uint16_t) &P4DIR
};

const uint16_t port_to_ren[] = {
	NOT_A_PORT,
	(uint16_t) &P1REN,
	(uint16_t) &P2REN,
	(uint16_t) &P3REN,
	(uint16_t) &P4REN
};

const uint16_t port_to_sel0[] = {  /* put this PxSEL register under the group of PxSEL0 */
	NOT_A_PORT,
	(uint16_t) &P1SEL,
	(uint16_t) &P2SEL,
	(uint16_t) &P3SEL,
	(uint16_t) &P4SEL
};

const uint8_t digital_pin_to_timer[] = {
	NOT_ON_TIMER, /*  0 - dummy */
	NOT_ON_TIMER, /*  1 - GND */
	NOT_ON_TIMER, /*  2 - VCC */
	NOT_ON_TIMER, /*  3 - P2.0 */
	NOT_ON_TIMER, /*  4 - P2.1 */
	T0A0,         /*  5 - P2.2, note: A0 output cannot be used with analogWrite */
	T0A1,         /*  6 - P2.3 */
	NOT_ON_TIMER, /*  7 - P2.4 */
	T0B0,         /*  8 - P4.3, note: B0 output cannot be used with analogWrite */
	T0B1,         /*  9 - P4.4 */
	NOT_ON_TIMER, /* 10 - P4.5 */
	NOT_ON_TIMER, /* 11 - P4.6 */
	NOT_ON_TIMER, /* 12 - GND */
	NOT_ON_TIMER, /* 13 - P2.6 */
	NOT_ON_TIMER, /* 14 - P2.7 */
	NOT_ON_TIMER, /* 15 - P3.2 */
	NOT_ON_TIMER, /* 16 - P3.3 */
	NOT_ON_TIMER, /* 17 - P3.0 */
	NOT_ON_TIMER, /* 18 - P3.1 */
	NOT_ON_TIMER, /* 19 - dummy */
	NOT_ON_TIMER, /* 20 - P1.0 */
	T0A0,         /* 21 - P1.1, note: A0 output cannot be used with analogWrite */
	T0A1,         /* 22 - P1.2 */
	NOT_ON_TIMER, /* 23 - dummy */
	NOT_ON_TIMER, /* 24 - P3.4 */
	NOT_ON_TIMER, /* 25 - P3.5 */
	NOT_ON_TIMER, /* 26 - P1.4 */
	T0A0,         /* 27 - P1.5, note: A0 output cannot be used with analogWrite */
	T0A1,         /* 28 - P1.6 */
	T0A2,         /* 29 - P1.7 */
	NOT_ON_TIMER, /* 30 - P3.7 */
	T0B0,         /* 31 - P4.0, note: B0 output cannot be used with analogWrite */
	T0B1,         /* 32 - P4.1 */
	T0B2,         /* 33 - P4.2 */
	NOT_ON_TIMER  /* 34 - P4.7 */
	
};

const uint8_t digital_pin_to_port[] = {
	NOT_A_PIN, /*  0 - dummy */
	NOT_A_PIN, /*  1 - GND */
	NOT_A_PIN, /*  2 - VCC */
	P2,        /*  3 - P2.0 */
	P2,        /*  4 - P2.1 */
	P2,        /*  5 - P2.2 */
	P2,        /*  6 - P2.3 */
	P2,        /*  7 - P2.4 */
	P4,        /*  8 - P4.3 */
	P4,        /*  9 - P4.4 */
	P4,        /* 10 - P4.5 */
	P4,        /* 11 - P4.6 */
	NOT_A_PIN, /* 12 - GND */
	P2,        /* 13 - P2.6 */
	P2,        /* 14 - P2.7 */
	P3,        /* 15 - P3.2 */
	P3,        /* 16 - P3.3 */
	P3,        /* 17 - P3.0 */
	P3,        /* 18 - P3.1 */
	NOT_A_PIN, /* 19 - dummy */
	P1,        /* 20 - P1.0 */
	P1,        /* 21 - P1.1 */
	P1,        /* 22 - P1.2 */
	NOT_A_PIN, /* 23 - dummy */
	P3,        /* 24 - P3.4 */
	P3,        /* 25 - P3.5 */
	P1,        /* 26 - P1.4 */
	P1,        /* 27 - P1.5 */
	P1,        /* 28 - P1.6 */
	P1,        /* 29 - P1.7 */
	P3,        /* 30 - P3.7 */
	P4,        /* 31 - P4.0 */
	P4,        /* 32 - P4.1 */
	P4,        /* 33 - P4.2 */
	P4         /* 34 - P4.7 */
};

const uint8_t digital_pin_to_bit_mask[] = {
	NOT_A_PIN, /*  0 - dummy */
	NOT_A_PIN, /*  1 - GND */
	NOT_A_PIN, /*  2 - VCC */
	BV(0),     /*  3 - P2.0 */
	BV(1),     /*  4 - P2.1 */
	BV(2),     /*  5 - P2.2 */
	BV(3),     /*  6 - P2.3 */
	BV(4),     /*  7 - P2.4 */
	BV(3),     /*  8 - P4.3 */
	BV(4),     /*  9 - P4.4 */
	BV(5),     /* 10 - P4.5 */
	BV(6),     /* 11 - P4.6 */
	NOT_A_PIN, /* 12 - GND */
	BV(6),     /* 13 - P2.6 */
	BV(7),     /* 14 - P2.7 */
	BV(2),     /* 15 - P3.2 */
	BV(3),     /* 16 - P3.3 */
	BV(0),     /* 17 - P3.0 */
	BV(1),     /* 18 - P3.1 */
	NOT_A_PIN, /* 19 - dummy */
	BV(0),     /* 20 - P1.0 */
	BV(1),     /* 21 - P1.1 */
	BV(2),     /* 22 - P1.2 */
	NOT_A_PIN, /* 23 - dummy */
	BV(4),     /* 24 - P3.4 */
	BV(5),     /* 25 - P3.5 */
	BV(4),     /* 26 - P1.4 */
	BV(5),     /* 27 - P1.5 */
	BV(6),     /* 28 - P1.6 */
	BV(7),     /* 29 - P1.7 */
	BV(7),     /* 30 - P3.7 */
	BV(0),     /* 31 - P4.0 */
	BV(1),     /* 32 - P4.1 */
	BV(2),     /* 33 - P4.2 */
	BV(7)      /* 34 - P4.7 */
};

const uint32_t digital_pin_to_analog_in[] = {
	NOT_ON_ADC, /*  0 - dummy */
	NOT_ON_ADC, /*  1 - GND */
	NOT_ON_ADC, /*  2 - VCC */
	0,          /*  3 - P2.0 (A0) */
	1,          /*  4 - P2.1 (A1) */
	2,          /*  5 - P2.2 (A2) */
	3,          /*  6 - P2.3 (A3) */
	4,          /*  7 - P2.4 (A4) */
	12,         /*  8 - P4.3 (A12) */
	13,         /*  9 - P4.4 (A13) */
	14,         /* 10 - P4.5 (A14) */
	15,         /* 11 - P4.6 (A15) */
	NOT_ON_ADC, /* 12 - GND */
	NOT_ON_ADC, /* 13 - P2.6 */
	NOT_ON_ADC, /* 14 - P2.7 */
	NOT_ON_ADC, /* 15 - P3.2 */
	NOT_ON_ADC, /* 16 - P3.3 */
	NOT_ON_ADC, /* 17 - P3.0 */
	NOT_ON_ADC, /* 18 - P3.1 */
	NOT_ON_ADC, /* 19 - dummy */
	NOT_ON_ADC, /* 20 - P1.0 */
	NOT_ON_ADC, /* 21 - P1.1 */
	NOT_ON_ADC, /* 22 - P1.2 */
	NOT_ON_ADC, /* 23 - dummy */
	NOT_ON_ADC, /* 24 - P3.4 */
	NOT_ON_ADC, /* 25 - P3.5 */
	NOT_ON_ADC, /* 26 - P1.4 */
	NOT_ON_ADC, /* 27 - P1.5 */
	NOT_ON_ADC, /* 28 - P1.6 */
	NOT_ON_ADC, /* 29 - P1.7 */
	7,          /* 30 - P3.7 */
	NOT_ON_ADC, /* 31 - P4.0 */
	NOT_ON_ADC, /* 32 - P4.1 */
	NOT_ON_ADC, /* 33 - P4.2 */
	NOT_ON_ADC  /* 34 - P4.7 */
};

#endif // #ifdef ARDUINO_MAIN
#endif // #ifndef Pins_Energia_h
