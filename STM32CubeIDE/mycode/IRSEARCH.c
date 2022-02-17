#include "IRSEARCH.h"
#include "motor.h"


char ctrl_comm = COMM_STOP; //控制指令
char ctrl_comm_last = COMM_STOP; //上一次的指令

void SearchRun(void)
{
	if(SEARCH_L_IO == WHITE_AREA && SEARCH_R_IO == WHITE_AREA)
		ctrl_comm = COMM_UP;
	else if(SEARCH_L_IO == BLACK_AREA && SEARCH_R_IO == WHITE_AREA)
		ctrl_comm = COMM_RIGHT;
	else if(SEARCH_R_IO == BLACK_AREA && SEARCH_L_IO == WHITE_AREA)
		ctrl_comm = COMM_LEFT;
	else ctrl_comm = COMM_STOP;

	if(ctrl_comm_last != ctrl_comm)
	{
		ctrl_comm_last = ctrl_comm;
		switch(ctrl_comm)
		{
			case COMM_UP:  		ZYSTM32_run(60,10);break;
			case COMM_DOWN:  	ZYSTM32_back(70,10);break;
			case COMM_LEFT: 	ZYSTM32_Left(100,100);break;
			case COMM_RIGHT:  	ZYSTM32_Right(100,100);break;
			case COMM_STOP:  	ZYSTM32_brake(10);break;
			default: break;
		}
	}
}
