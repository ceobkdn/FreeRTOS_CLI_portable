
#ifndef CLI_APP_H
#define CLI_APP_H

/* *INDENT-OFF* */
#ifdef __cplusplus
    extern "C" {
#endif
/* *INDENT-ON* */
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "cli.h"

/*-----------------------------------------------------------*/
/*
 * FreeRTOS_CLIInputCommnand() non return.
 */

void FreeRTOS_CLI_Put(char InChar, void ( *printFunc )( char [] ));

/*-----------------------------------------------------------*/
/*
 * Clear screen command.
 */
BaseType_t prvClcCommand( char *pcWriteBuffer, size_t xWriteBufferLen, const char *pcCommandString );



static const CLI_Command_Definition_t xClcCommand =
{
  "clc",
  "clc: Clear screen command",
  prvClcCommand,
  0
};











/* *INDENT-OFF* */
#ifdef __cplusplus
    }
#endif
/* *INDENT-ON* */

#endif /* CLI_APP_H */
