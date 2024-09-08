/*
 * usart.h
 *
 * Created: 8/25/2024 1:17:48 PM
 *  Author: Sherif Abdelhay
 */ 


#ifndef USART_H_
#define USART_H_

#define F_CPU 1000000UL					
#include <avr/io.h>							
#include <math.h>

#define DOUBLE_SPEED_MODE

#ifdef DOUBLE_SPEED_MODE
#define BAUD_PRESCALE (int)round(((((double)F_CPU / ((double)BAUDRATE * 8.0))) - 1.0))	/* Define prescale value */
#else
#define BAUD_PRESCALE (int)round(((((double)F_CPU / ((double)BAUDRATE * 16.0))) - 1.0))	/* Define prescale value */
#endif

void USART_Init(unsigned long);				
char USART_RxChar();						
void USART_TxChar(char);					
void USART_SendString(char*);				



#endif /* USART_H_ */