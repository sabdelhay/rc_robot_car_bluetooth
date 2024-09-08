/*
 * direction_speed.h
 *
 * Created: 8/25/2024 2:24:27 PM
 *  Author: Sherif Abdelhay
 */ 


#ifndef DIRECTION_SPEED_H_
#define DIRECTION_SPEED_H_

// Define motor control pins
#define MOTOR_FL_FWD PA0  // Front-Left Forward  
#define MOTOR_FL_BCK PA1  // Front-Left Backward 
#define MOTOR_RL_FWD PA2  // Rear-Left Forward 
#define MOTOR_RL_BCK PA3  // Rear-Left Backward 

#define MOTOR_FR_FWD PB0  // Front-Right Forward 
#define MOTOR_FR_BCK PB1  // Front-Right Backward 
#define MOTOR_RR_FWD PB2  // Rear-Right Forward 
#define MOTOR_RR_BCK PB4  // Rear-Right Backward

// Enable Pin
#define EN_FRONT_LEFT		PD6  
#define EN_REAR_LEFT		PD7  
#define EN_FRONT_RIGHT		PD4 
#define EN_REAR_RIGHT		PD5 

void MOTOR_Init();
void move_forward(void);
void move_backward(void);
void turn_left(void);
void turn_right(void);
void stop(void);


#endif /* DIRECTION_SPEED_H_ */