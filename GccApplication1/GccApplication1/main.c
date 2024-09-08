/*
 * GccApplication1.c
 *
 * Created: 8/25/2024 1:16:09 PM
 * Author : Sherif Abdelhay
 */ 

#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include "DIO.h"
#include "direction_speed.h"
#include "usart.h"

int main(void)
{
	USART_Init(9600);  
	MOTOR_Init();
    
    while (1) 
    {
		unsigned char val = USART_RxChar();

		switch(val){
			
			case 'F':
			case 'f':
			move_forward();
			break;
			
			case 'B':
			case 'b':
			move_backward();
			break;	
			
			case 'R':
			case 'r':
			turn_right();
			break;
			
			case 'L':
			case 'l':
			turn_left();
			break;

			case 'S':
			case 's':
			stop();
			break;
		}
    }
	return 0;
}

