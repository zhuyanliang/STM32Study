#include "stm32f10x.h"
#include "usart1.h"

int main(void)
{
	//����RCCϵͳʱ�ӡ�ʹ��USART1������
	USART1_GPIO_Config(); 
	USART1_Mode_Config();
	
	printf("www.zhuyanliang.com \n\r");
	printf("www.chenmanjuan.com \n\r");
	printf("www.zhuzichen.com \n\r");
	
	return 0;
}

