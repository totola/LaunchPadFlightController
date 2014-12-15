/* Copyright (C) 2014 Kristian Lauszus, TKJ Electronics. All rights reserved.

 This software may be distributed and modified under the terms of the GNU
 General Public License version 2 (GPL2) as published by the Free Software
 Foundation and appearing in the file GPL2.TXT included in the packaging of
 this file. Please note that GPL2 Section 2[b] requires that all works based
 on this software must also be made publicly available under the terms of
 the GPL2 ("Copyleft").

 Contact information
 -------------------

 Kristian Lauszus, TKJ Electronics
 Web      :  http://www.tkjelectronics.com
 e-mail   :  kristianl@tkjelectronics.com
*/

#ifndef __rx_h__
#define __rx_h__

#ifdef __cplusplus
extern "C" {
#endif

enum {
    RX_AILERON_CHAN = 0,
    RX_ELEVATOR_CHAN,
    RX_THROTTLE_CHAN,
    RX_RUDDER_CHAN,
    RX_AUX1_CHAN,
    RX_AUX2_CHAN,
    RX_NUM_CHANNELS,
};

#define RX_MIN_INPUT 665
#define RX_MAX_INPUT 1730

extern volatile uint16_t rxChannel[RX_NUM_CHANNELS];
extern volatile bool validRXData;

void initRX(void);

#ifdef __cplusplus
}
#endif

#endif
