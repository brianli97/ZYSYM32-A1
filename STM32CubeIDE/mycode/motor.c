#include "motor.h"
#include "math.h"
#include "main.h"

extern TIM_HandleTypeDef htim4;
//signed short sPWMR,sPWML,dPWM;

void SetMotorSpeed(unsigned char ucChannel,signed char cSpeed)
{
	short sPWM;

	if(cSpeed>=100) cSpeed = 100;
	if(cSpeed<=-100) cSpeed =-100;

	sPWM = 7201 - fabs(cSpeed)*72;
	switch(ucChannel)
	{
		case 0://右轮
			__HAL_TIM_SetCompare(&htim4,TIM_CHANNEL_3,sPWM);
			if(cSpeed>0)
				RIGHT_MOTOR_GO_RESET;
			else if(cSpeed<0)
				RIGHT_MOTOR_GO_SET;
			break;
		case 1://左轮
			__HAL_TIM_SetCompare(&htim4,TIM_CHANNEL_4,sPWM);
			if (cSpeed>0)
				LEFT_MOTOR_GO_SET;
			else if (cSpeed<0)
				LEFT_MOTOR_GO_RESET;
			break;
	}
}

//----------------------------------运动函数--------------------------------
void ZYSTM32_run(signed char speed,int time) //前进函数
{
	signed char f_speed = -speed;
	SetMotorSpeed(1,f_speed);	//左轮  //为负数
	SetMotorSpeed(0,speed);		//右轮  //为正数
	HAL_Delay(time);			//时间为毫秒
}

void ZYSTM32_brake(int time)	//刹车函数
{
	SetMotorSpeed(1,0); // 左轮  //为0
	SetMotorSpeed(0,0); // 右轮  //为0
	RIGHT_MOTOR_GO_RESET;
	LEFT_MOTOR_GO_RESET;
	HAL_Delay(time);			//时间为毫秒
}

void ZYSTM32_Left(signed char speed,int time)	//左转函数
{
	SetMotorSpeed(1,0); // 左轮		//左轮不动
	SetMotorSpeed(0,speed);			//右轮为正
	HAL_Delay(time);			//时间为毫秒
}

void ZYSTM32_Spin_Left(signed char speed,int time)	//左旋转函数
{
	signed char u_speed = 100 - speed;
	SetMotorSpeed(1,speed);	//左轮		//左轮为正
	SetMotorSpeed(0,u_speed);			//右轮为正
	HAL_Delay(time);			//时间为毫秒
}

void ZYSTM32_Right(signed char speed,int time)	//右转函数
{
	signed char f_speed = 100 - speed;
	SetMotorSpeed(1,f_speed); 	// 左轮		//左轮负
	SetMotorSpeed(0,0);			//右轮为0
	HAL_Delay(time);			//时间为毫秒
}

void ZYSTM32_Spin_Right(signed char speed,int time)		//右旋转函数
{
	signed char u_speed = 100 - speed;
	signed char f_speed = -speed;
	SetMotorSpeed(1,-u_speed);	//左轮		//左轮为负
	SetMotorSpeed(0,f_speed);	//右轮		//右轮为负
	HAL_Delay(time);			//时间为毫秒
}

void ZYSTM32_back(signed char speed,int time)
{
	signed char u_speed = 100 - speed;
	signed char f_speed = - u_speed;
	SetMotorSpeed(1,u_speed);	//左轮		//左轮为正
	SetMotorSpeed(0,f_speed);	//右轮		//右轮为负
	HAL_Delay(time);			//时间为毫秒
}
