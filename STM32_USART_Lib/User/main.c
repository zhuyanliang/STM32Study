#include "stm32f10x.h"
#include "usart1.h"

int main(void)
{
	//开启RCC系统时钟、使能USART1及引脚
	USART1_GPIO_Config(); 
	USART1_Mode_Config();
	
	printf("www.zhuyanliang.com \n\r");
	printf("www.chenmanjuan.com \n\r");
	printf("www.zhuzichen.com \n\r");
	
	return 0;
}

