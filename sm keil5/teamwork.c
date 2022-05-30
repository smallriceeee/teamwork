#include "stm32f10x.h"
#include "OLED.h"

ErrorStatus HSEStartUpStatus;
GPIO_InitTypeDef GPIO_InitStructure;
NVIC_InitTypeDef NVIC_InitStructure;
EXTI_InitTypeDef EXTI_InitStructure;

void RCC_Configuration(void)
{
  RCC_DeInit();
  RCC_HSEConfig(RCC_HSE_ON);
  HSEStartUpStatus = RCC_WaitForHSEStartUp();
  if(HSEStartUpStatus == SUCCESS)
  {
    RCC_HCLKConfig(RCC_SYSCLK_Div1); 
    RCC_PCLK2Config(RCC_HCLK_Div1); 
    RCC_PCLK1Config(RCC_HCLK_Div2);
    FLASH_SetLatency(FLASH_Latency_2);
    FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable);
    RCC_PLLConfig(RCC_PLLSource_HSE_Div1, RCC_PLLMul_9);
    RCC_PLLCmd(ENABLE);
    while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET)	;
	RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);
	while(RCC_GetSYSCLKSource() != 0x08);
  }
	//system clock
   
  /* Enable GPIOA and AFIO clocks */
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO, ENABLE);

}
void GPIO_Configuration()
{

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
	//1up 2down 3left 4right 5confirm
	
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	GPIO_SetBits(GPIOA, GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10);
	//
	
 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
 	GPIO_Init(GPIOB, &GPIO_InitStructure);
	//I2C´®¿Ú
}
void delay_nus(unsigned long n)
{ 
  unsigned long j;
  while(n--)
  {
    j=8;
	while(j--);
  }
}
void delay_nms(unsigned long n)
{
  while(n--)
    delay_nus(1100);
}
void NVIC_Configuration()
{
	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}
void EXTI_Configuration()
{
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource1);
	EXTI_InitStructure.EXTI_Line = EXTI_Line1;
	EXTI_InitStructure.EXTI_Mode =EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
	EXTI_InitStructure.EXTI_LineCmd = DISABLE;
	EXTI_Init(&EXTI_InitStructure);
}
void EXTI1_IRQHandler(void)
{
	
	delay_nms(100);
	
	EXTI_ClearITPendingBit(EXTI_Line1);
}
void GameTable()
{
	OLED_Init();
	
	OLED_ShowString(8,3,"AIRCRAFT");
	OLED_ShowString(6,4,"FIGHT");
	OLED_ShowString(6,9,"START");
	OLED_ShowString(6,10,"SCORE");
	OLED_ShowString(6,11,"CREDIT");
	OLED_ShowString(8,16,"0.0.1");
	OLED_ShowChar(7,9,'>');
}
void Game()
{
	
}
int main(void)
{
	int pot;
	pot = 9;
	RCC_Configuration();
	GPIO_Configuration();
	NVIC_Configuration();
	EXTI_Configuration();
	GameTable();
	while(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_5) != 0)
	{
		if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1) == 0)
		{
			if(pot == 9)
			{
				pot=11;
				OLED_ShowChar(7,9,' ');
				OLED_ShowChar(7,pot,'>');
				delay_nms(100);
			}
			else
			{
				pot = pot - 1;
				OLED_ShowChar(7,pot + 1,' ');
				OLED_ShowChar(7,pot,'>');
				delay_nms(100);
			}
		}
		else if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_2) == 0)
		{
			if(pot == 11)
			{
				pot=9;
				OLED_ShowChar(7,11,' ');
				OLED_ShowChar(7,pot,'>');
				delay_nms(100);
			}
			else
			{
				pot = pot + 1;
				OLED_ShowChar(7,pot - 1,' ');
				OLED_ShowChar(7,pot,'>');
				delay_nms(100);
			}
		}
		else
			OLED_ShowChar(7,pot,'>');
	}
	
	while (1)
	{
		
	}
}
