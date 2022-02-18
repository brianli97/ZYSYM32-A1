#include "IRAvoid.h"
#include "motor.h"
#include "keyscan.h"

int SR_2;	//右边红外避障传感器状态
int SL_2;	//左边红外避障传感器状态

void AVoidRun(void)
{
	SR_2 = AVOID_RIGHT_IO;
	SL_2 = AVOID_LEFT_IO;
	if(SL_2 == BARRIER_N && SR_2 == BARRIER_N)
	{
		ZYSTM32_run(60,10);
		BEEP_RESET;
		LED_D3_RESET;
	}
	else if(SL_2 == BARRIER_N && SR_2 == BARRIER_Y)
	{
		ZYSTM32_Left(70,300);
	}
	else if(SR_2 == BARRIER_N && SL_2 == BARRIER_Y)
	{
		ZYSTM32_Right(70,300);
	}
	else
	{
		BEEP_SET;
		LED_D3_SET;
		ZYSTM32_brake(300); //停止300ms
		ZYSTM32_back(70,1000);	//后退400ms

		ZYSTM32_Spin_Left(100,500);//左旋转500ms
	}
}
