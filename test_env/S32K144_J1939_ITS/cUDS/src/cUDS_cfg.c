/*
 * cUDS_cfg.c
 *
 *  Created on: 30-Aug-2020
 *      Author: 105317135
 */

#ifndef INC_CUDS_CFG_C_
#define INC_CUDS_CFG_C_

#include "cUDS_cfg.h"

void RdDataById(void);

srvc_cfg_t serviceConfigs[1U] = {
									{
											.srvcId = 22U,
											.srvcSecLevel = 0U,
											.srvcSession = 0U,
											.srvcRoutine = RdDataById
									}
								};

void RdDataById(void)
{
	uint8_t data[8U] = {0x03U, 0x62U, 0x01U, 0x01U, 0x00U, 0x00U, 0x00U, 0x00U};

	PRINTF("RDBI Invoked\r\n");
	Can_Transmit(0x7ABUL, 8U, data, 0U);
}

#endif /* INC_CUDS_CFG_C_ */
