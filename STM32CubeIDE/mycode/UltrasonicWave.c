/*------------------
 *          | PC0  - TRIG      |
 *          | PC1  - ECHO      |
 *           ------------------
 */
#include "UltrasonicWave.h"
#include "tim.h"
#include "main.h"

extern TIM_HandleTypeDef htim2;
float UltrasonicWave_Distance;		//计算出的距离

//------------------------通道1中断函数---------------------------------------------
void HAL_GPIO_EXIT_Callback(uint16_t GPIO_Pin)
{
	if(GPIO_Pin == GPIO_PIN_1)
	{
		delay_us(10);
		if(__HAL_GPIO_EXTI_GET_IT(GPIO_Pin) != RESET)
		{
			__HAL_TIM_SET_COUNTER(&htim2,0);
			__HAL_TIM_ENABLE(&htim2);				//开启时钟

			while(HAL_GPIO_ReadPin(Echo_GPIO_Port, Echo_Pin));	//等待低电平

			__HAL_TIM_DISABLE(&htim2);				//定时器2失能
			UltrasonicWave_Distance = __HAL_TIM_GET_COUNTER(&htim2) * 34 / 200.0;	//计算距离&&UltrasonicWave_Distance<150

		}
	}
}

/*
 * 	函数名：UltrasonicWave_StartMeasure
 * 	描述：	开始测距，发送一个>10us的脉冲，然后测量返回的高电平时间
 * 	输入：无
 * 	输出：无
 */
int	UltrasonicWave_StartMeasure(void)
{
	int u_temp;
	HAL_GPIO_WritePin(TRIG_GPIO_Port, TRIG_Pin, SET);	//送>10us的高电平
	delay_us(20);
	HAL_GPIO_WritePin(TRIG_GPIO_Port, TRIG_Pin, RESET);
	u_temp = UltrasonicWave_Distance * 10;
	return u_temp;
}
