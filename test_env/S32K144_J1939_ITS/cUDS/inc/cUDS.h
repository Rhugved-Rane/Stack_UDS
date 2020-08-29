/*
 * cUDS.h
 *
 *  Created on: 29-Aug-2020
 *      Author: 105317135
 */

#ifndef INC_CUDS_H_
#define INC_CUDS_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "cUDS_cfg.h"

typedef struct CAN_Data
{
	bool		flag;
	uint32_t	msgId;
	uint8_t		msgLen;
	uint8_t		msgData[8];
}CAN_Data_t;

extern void PRINTF(const char*);
void cUDS_CAN_Rx(uint32_t msgId, uint8_t dataLen, uint8_t* data);
void cUDS_Receive_Msg(void);

#endif /* INC_CUDS_H_ */
