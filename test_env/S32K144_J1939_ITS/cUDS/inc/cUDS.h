/*
 * cUDS.h
 *
 *  Created on: 29-Aug-2020
 *      Author: 105317135
 */

#ifndef INC_CUDS_H_
#define INC_CUDS_H_

#include <stdint.h>
#include <stdio.h>

extern void PRINTF(const char*);
void cUDS_Receive_Msg(uint32_t msgId, uint8_t dataLen, uint8_t* data);

#endif /* INC_CUDS_H_ */
