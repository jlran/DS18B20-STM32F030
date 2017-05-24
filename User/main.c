#include "stm32f0xx.h"
#include "delay.h"
#include "led.h"
#include "USART1.h"
#include "Ds18b20.h"
//#include "Key.h"

//void KeyInit(void);
//void GetKeyVal(void);
int main(void)
{
  delay_init();
  LED_Init();
	DS18B20init();	//≥ı ºªØ
	//KeyInit();
  USART1_Init(115200);	
	printf("Please send Data:1");
  while (1)
  {	} 
}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t* file, uint32_t line)
{

  while (1)
  {
  }
}
#endif

           