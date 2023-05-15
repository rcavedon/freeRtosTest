/*
 * freeRTOS_debug.c
 *
 *  Created on: 15 mag 2023
 *      Author: riccardoca
 */
#include "freeRTOS_debug.h"

void vAssertCalled(const char *file, const int line)
{
   fprintf(stdout, file);
   fprintf(stdout, ",");
   fprintf(stdout, " %d", line);
   fprintf(stdout, "\n");
}

