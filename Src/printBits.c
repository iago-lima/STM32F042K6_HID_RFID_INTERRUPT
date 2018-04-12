/*
 * printBits.c
 *
 *  Created on: 11 de abr de 2018
 *      Author: iago
 */
#include "main.h"
#include "stm32f0xx_hal.h"
#include "printBits.h"

void printBits(UART_HandleTypeDef *huart1,unsigned int facilityCode, unsigned int cardCode){

	char facility_aux[30];
	char card_aux[30];
	char decimal[30];
	char hexa[30];
	char fc[30];
	char cc[30];
	char espaco[1];
	char enter[30];

	sprintf(enter, "\r\n");
	sprintf(facility_aux, "%u", facilityCode);
	sprintf(card_aux, "%u", cardCode);
	sprintf(decimal, "Decimal: ");
	sprintf(fc, "FC = ");
	sprintf(cc, ", CC = ");
	sprintf(espaco, " ");

	HAL_UART_Transmit(huart1,decimal, strlen(decimal), 1000);
	HAL_UART_Transmit(huart1,fc,strlen(fc), 1000);
	HAL_UART_Transmit(huart1,facility_aux,strlen(facility_aux), 1000);
	HAL_UART_Transmit(huart1,cc,strlen(cc), 1000);
	HAL_UART_Transmit(huart1,card_aux,strlen(card_aux), 1000);
	HAL_UART_Transmit(huart1,espaco,strlen(espaco), 1000);

	sprintf(facility_aux, "%x",facilityCode );
	sprintf(card_aux, "%x", cardCode);

	sprintf(hexa, "Hexadecimal: ");

	HAL_UART_Transmit(huart1,hexa, strlen(hexa), 1000);
	HAL_UART_Transmit(huart1,fc,strlen(fc), 1000);
	HAL_UART_Transmit(huart1,facility_aux,strlen(facility_aux), 1000);
	HAL_UART_Transmit(huart1,cc,strlen(cc), 1000);
	HAL_UART_Transmit(huart1,card_aux,strlen(card_aux), 1000);
	HAL_UART_Transmit(huart1,enter,strlen(enter), 1000);
}



