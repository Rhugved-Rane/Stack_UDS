/*
 * cUDS.c
 *
 *  Created on: 29-Aug-2020
 *      Author: 105317135
 */

#include "cUDS.h"

void cUDS_Receive_Msg(uint32_t msgId, uint8_t dataLen, uint8_t* data)
{
	uint8_t str[128U];

	snprintf(str, 128U, "ID: 0x%X LEN: %d DATA: %X %X %X %X %X %X %X %X\r\n",\
			msgId, dataLen, data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7]);

	PRINTF(str);
}
