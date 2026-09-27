
#include <stdint.h>
#include <soc/uart_reg.h>
#include <soc/soc.h>

#include "loco_uart.h"

/* FR: Cette fonction sert à ecrire un caractère dans le registre
de l'UART0 . On verifie d'abord le status de l'UART . S'il est
pret à recevoir un nouveau caractère le processeur y écrit . 

EN: This function allows us to write a character in a UART register .
Before writing on the register  we verify first if the 
UART is ready to receive new datas . 
*/
void loco_uart_putc(char c){
    while (REG_GET_FIELD(UART_STATUS_REG(0), UART_TXFIFO_CNT) >= 127){}
    WRITE_PERI_REG(UART_FIFO_REG(0), (uint32_t)c);
}

// EN: This function allows us to write a string on the UART.
// FR:  Cette fonction nous permet d'écrire une chaine de caractère sur l'UART . 
void loco_uart_write(const char *str){
    while (*str != '\0'){
        loco_uart_putc(*str);
        str++;
    }
}