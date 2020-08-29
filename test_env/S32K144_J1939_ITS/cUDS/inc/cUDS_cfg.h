/*
 * cUDS_cfg.h
 *
 *  Created on: 30-Aug-2020
 *      Author: 105317135
 */

#include <stdint.h>
#include "CAN_NXP_HAL_if.h"

extern void PRINTF(const char*);
typedef void (*fptr)(void);

typedef struct srvc_cfg
{
	uint8_t	srvcId;
	uint8_t	srvcSecLevel;
	uint8_t	srvcSession;
	fptr	srvcRoutine;
}srvc_cfg_t;
