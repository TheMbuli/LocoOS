#include <stdio.h>
#include "kernel.h"
#include "loco_uart.h"

void loco_kernel_init(void)
{
    loco_uart_write("HELLO\n");

}