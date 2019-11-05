/*
 * buffer.c
 *
 * ARINC buffers.
 *
 * azuepke, 2014-09-08: initial
 */

#include "apex.h"

void CREATE_BUFFER (
/*in */ BUFFER_NAME_TYPE BUFFER_NAME,
/*in */ MESSAGE_SIZE_TYPE MAX_MESSAGE_SIZE,
/*in */ MESSAGE_RANGE_TYPE MAX_NB_MESSAGE,
/*in */ QUEUING_DISCIPLINE_TYPE QUEUING_DISCIPLINE,
/*out*/ BUFFER_ID_TYPE *BUFFER_ID,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)BUFFER_NAME;
	(void)MAX_MESSAGE_SIZE;
	(void)MAX_NB_MESSAGE;
	(void)QUEUING_DISCIPLINE;
	(void)BUFFER_ID;
	*RETURN_CODE = 42;
}

void SEND_BUFFER (
/*in */ BUFFER_ID_TYPE BUFFER_ID,
/*in */ MESSAGE_ADDR_TYPE MESSAGE_ADDR, /* by reference */
/*in */ MESSAGE_SIZE_TYPE LENGTH,
/*in */ SYSTEM_TIME_TYPE TIME_OUT,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)BUFFER_ID;
	(void)MESSAGE_ADDR;
	(void)LENGTH;
	(void)TIME_OUT;
	*RETURN_CODE = 42;
}

void RECEIVE_BUFFER (
/*in */ BUFFER_ID_TYPE BUFFER_ID,
/*in */ SYSTEM_TIME_TYPE TIME_OUT,
/*out*/ MESSAGE_ADDR_TYPE MESSAGE_ADDR,
/*out*/ MESSAGE_SIZE_TYPE *LENGTH,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)BUFFER_ID;
	(void)TIME_OUT;
	(void)MESSAGE_ADDR;
	(void)LENGTH;
	*RETURN_CODE = 42;
}

void GET_BUFFER_ID (
/*in */ BUFFER_NAME_TYPE BUFFER_NAME,
/*out*/ BUFFER_ID_TYPE *BUFFER_ID,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)BUFFER_NAME;
	(void)BUFFER_ID;
	*RETURN_CODE = 42;
}

void GET_BUFFER_STATUS (
/*in */ BUFFER_ID_TYPE BUFFER_ID,
/*out*/ BUFFER_STATUS_TYPE *BUFFER_STATUS,
/*out*/ RETURN_CODE_TYPE *RETURN_CODE )
{
	// FIXME: IMPLEMENTME
	assert(0);
	(void)BUFFER_ID;
	(void)BUFFER_STATUS;
	*RETURN_CODE = 42;
}