#include "keyscan.h"
#include "main.h"

void keyscan()
{
	int val;
	val = KEY; //读取按键
	while(!HAL_GPIO_ReadPin(KEY_GPIO_Port, KEY_Pin))	//当按键没有被按下时,一直循环
	{
		val = KEY;
	}
	while(HAL_GPIO_ReadPin(KEY_GPIO_Port, KEY_Pin))		//当按键被按下时
	{
		HAL_Delay(10);	//延时10ms
		val = KEY;		//读取数字端口PC2口电平值赋给val
		if(val = 1)		//第二次判断按键是否被按下
		{
			BEEP_SET;	//蜂鸣器响
			while(!HAL_GPIO_ReadPin(KEY_GPIO_Port, KEY_Pin))	//判断按下是否被松开
				BEEP_RESET; //蜂鸣器停止
		}
		else
			BEEP_RESET; //蜂鸣器停止
	}
}
