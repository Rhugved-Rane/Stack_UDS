/*
 * cUDS.c
 *
 *  Created on: 29-Aug-2020
 *      Author: 105317135
 */

#include "cUDS.h"

extern srvc_cfg_t serviceConfigs[];
CAN_Data_t Can_Data;

void cUDS_CAN_Rx(uint32_t msgId, uint8_t dataLen, uint8_t* data)
{
	Can_Data.flag = true;
	Can_Data.msgId = msgId;
	Can_Data.msgLen = dataLen;
	for(uint8_t i = 0; i < 8U; i++)
	{
		Can_Data.msgData[i] = data[i];
	}
}

void cUDS_Receive_Msg(void)
{
	uint8_t str[128U];

	if(true == Can_Data.flag)
	{
		Can_Data.flag = false;

		snprintf(str, 128U, "ID: 0x%X LEN: %d DATA: %X %X %X %X %X %X %X %X\r\n",\
				Can_Data.msgId, Can_Data.msgLen, Can_Data.msgData[0], Can_Data.msgData[1],\
				Can_Data.msgData[2], Can_Data.msgData[3], Can_Data.msgData[4],\
				Can_Data.msgData[5], Can_Data.msgData[6], Can_Data.msgData[7]);

		PRINTF(str);

		if(0x22U == Can_Data.msgData[1])
		{
			serviceConfigs[0].srvcRoutine();
		}
	}
}
