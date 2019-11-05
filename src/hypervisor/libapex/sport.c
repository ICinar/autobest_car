/*
 * sport.c
 *
 * ARINC sampling ports.
 *
 * azuepke, 2014-09-08: initial
 */

#include "apex.h"

void CREATE_SAMPLING_PORT (
/*in */ SAMPLING_PORT_NAME_TYPE SAMPLING_PORT_NAME,
/*in */ MESSAGE_SIZE_TYPE MAX_MESSAGE_SIZE,
/*in */ PORT_DIRECTION_TYPE PORT_DIRECTION,
/*in */ SYSTEM_TIME_TYPE REFRESH_PERIOD,
/*out*/ SAMPLING_PORT_ID_TYPE *SAMPLING_PORT_ID,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)SAMPLING_PORT_NAME;
	(void)MAX_MESSAGE_SIZE;
	(void)PORT_DIRECTION;
	(void)REFRESH_PERIOD;
	(void)SAMPLING_PORT_ID;
	*RETURN_CODE = 42;
}

void WRITE_SAMPLING_MESSAGE (
/*in */ SAMPLING_PORT_ID_TYPE SAMPLING_PORT_ID,
/*in */ MESSAGE_ADDR_TYPE MESSAGE_ADDR, /* by reference */
/*in */ MESSAGE_SIZE_TYPE LENGTH,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)SAMPLING_PORT_ID;
	(void)MESSAGE_ADDR;
	(void)LENGTH;
	*RETURN_CODE = 42;
}

void READ_SAMPLING_MESSAGE (
/*in */ SAMPLING_PORT_ID_TYPE SAMPLING_PORT_ID,
/*out*/ MESSAGE_ADDR_TYPE MESSAGE_ADDR,
/*out*/ MESSAGE_SIZE_TYPE *LENGTH,
/*out*/ VALIDITY_TYPE *VALIDITY,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)SAMPLING_PORT_ID;
	(void)MESSAGE_ADDR;
	(void)LENGTH;
	(void)VALIDITY;
	*RETURN_CODE = 42;
}

void GET_SAMPLING_PORT_ID (
/*in */ SAMPLING_PORT_NAME_TYPE SAMPLING_PORT_NAME,
/*out*/ SAMPLING_PORT_ID_TYPE *SAMPLING_PORT_ID,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)SAMPLING_PORT_NAME;
	(void)SAMPLING_PORT_ID;
	*RETURN_CODE = 42;
}

void GET_SAMPLING_PORT_STATUS (
/*in */ SAMPLING_PORT_ID_TYPE SAMPLING_PORT_ID,
/*out*/ SAMPLING_PORT_STATUS_TYPE *SAMPLING_PORT_STATUS,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)SAMPLING_PORT_ID;
	(void)SAMPLING_PORT_STATUS;
	*RETURN_CODE = 42;
}
