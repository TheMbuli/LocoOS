/*
EN: This file is the entry point for our KERNEL 
FR: Ce fichier est le point d'entré pour le KERNEL
*/


#include <stdio.h>
#include "kernel.h"
#include "loco_uart.h"

void loco_kernel_init(void)
{
    // Ecrire la chaine HELLO 
    loco_uart_write("HELLO\n");

}