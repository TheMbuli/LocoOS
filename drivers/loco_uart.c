#include "loco_uart.h"

#include <stdint.h>
#include "soc/uart_reg.h"
#include "soc/soc.h"

void loco_uart_putc(char c){
    while (REG_GET_FIELD(UART_STATUS_REG(0), UART_TXFIFO_CNT) >= 127){}
    WRITE_PERI_REG(UART_FIFO_REG(0), (uint32_t)c);
}

void loco_uart_write(const char *str){
    while (*str != '\0'){
        loco_uart_putc(*str);
        str++;
    }
}