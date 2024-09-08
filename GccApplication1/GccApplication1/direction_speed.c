#include <avr/io.h>
#include "DIO.h"
#include "direction_speed.h"
#define F_CPU 1000000UL
#include <util/delay.h>


void MOTOR_Init(){
	DDRA = 0xFF;
	DDRB = 0xFF;
	
	DIO_write('D', EN_FRONT_LEFT, 1);
	DIO_write('D', EN_REAR_LEFT, 1);
	DIO_write('D', EN_FRONT_RIGHT, 1);
	DIO_write('D', EN_REAR_RIGHT, 1);
}

void move_forward(void) {
	
	DIO_write('A', MOTOR_FL_FWD, 1);
	DIO_write('A', MOTOR_RL_FWD, 1);
	
	DIO_write('B', MOTOR_FR_FWD, 1);
	DIO_write('B', MOTOR_RR_FWD, 1);
}

void move_backward(void) {
	
	DIO_write('A', MOTOR_FL_BCK, 1);
	DIO_write('A', MOTOR_RL_BCK, 1);
	
	DIO_write('B', MOTOR_FR_BCK, 1);
	DIO_write('B', MOTOR_RR_BCK, 1);
}

void turn_left(void) {

	DIO_write('A', MOTOR_FL_BCK, 1);
	DIO_write('A', MOTOR_RL_BCK, 1);
	
	DIO_write('B', MOTOR_FR_FWD, 1);
	DIO_write('B', MOTOR_RR_FWD, 1);
}

void turn_right(void) {

	DIO_write('A', MOTOR_FL_FWD, 1);
	DIO_write('A',  MOTOR_RL_FWD, 1);
	
	DIO_write('B', MOTOR_FR_BCK, 1);
	DIO_write('B', MOTOR_RR_BCK, 1);
}

void stop(void) {
	PORTA = 0x00;
	PORTB = 0x00;
}