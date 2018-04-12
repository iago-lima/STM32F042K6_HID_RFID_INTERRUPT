/*
 * printBits.h
 *
 *  Created on: 11 de abr de 2018
 *      Author: iago
 */

#ifndef PRINTBITS_H_
#define PRINTBITS_H_
#include "stm32f0xx_hal.h"

void printBits(UART_HandleTypeDef *huart1,unsigned int facilityCode, unsigned int cardCode);


#endif /* PRINTBITS_H_ */
