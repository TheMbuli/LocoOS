#ifndef LOCO_UART_H
#define LOCO_UART_H

// EN: Prototype for the function used to write à string. 
// FR: Prototype de la fonction utilisées pour écrire une chaine 
void loco_uart_write(const char *str);

// EN: Prototype for the function used to write a character. 
// FR: Prototype de la fonction utilisé pour écrire un caractère.
void loco_uart_putc(char c);

#endif