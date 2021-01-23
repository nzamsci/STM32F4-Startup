/**
  * @file
  * @author Nick Zamora <nzamora@mtu.edu>
  * 
  * @brief 	- Startup source code for STM32F411xE microcontrollers. 
  * 	
  *
  * @todo 
  * 		- Reset handler
  *			
  */

#include "STM32F411xE_startup.h"

#define		SRAM_START		0x20000000U
#define		SRAM_END		0x20020000U
#define		STACK_START		SRAM_END		


unsigned int vector_table[] __attribute__ ((section(".isr_vector")))
{
	STACK_START,

	/* Exception Handlers */
	(unsigned int) &Reset_Handler,
	(unsigned int) &NMI_Hander,
	(unsigned int) &HardFault_Hanlder,
	(unsigned int) &MemManage_Handler,
	(unsigned int) &BusFault_Handler,
	(unsigned int) &UsageFault_Handler,
	(unsigned int) &SVCall_Handler,
	(unsigned int) &Debug_Monitor_Handler,
	(unsigned int) &PendSV_Handler,
	(unsigned int) &Systick_Handler,

	/* Interrupt Handlers */
	(unsigned int) &WWDG_IRQHandler,
	(unsigned int) &EXTI16_PVD_IRQHandler,
	(unsigned int) &EXTI21_TAMP_STAMP_IRQHandler,
	(unsigned int) &EXTI22_RTC_WAKEUP_IRQHandler,
	(unsigned int) &FLASH_IRQHandler,
	(unsigned int) &RCC_IRQHandler,
	(unsigned int) &EXTI0_IRQHandler,
	(unsigned int) &EXTI1_IRQHandler,
	(unsigned int) &EXTI2_IRQHandler,
	(unsigned int) &EXTI3_IRQHandler,
	(unsigned int) &EXTI4_IRQHandler,
	(unsigned int) &DMA_Stream0_IRQHandler,
	(unsigned int) &DMA_Stream1_IRQHandler,
	(unsigned int) &DMA_Stream2_IRQHandler,
	(unsigned int) &DMA_Stream3_IRQHandler,
	(unsigned int) &DMA_Stream4_IRQHandler,
	(unsigned int) &DMA_Stream5_IRQHandler,
	(unsigned int) &DMA_Stream5_IRQHandler,
	(unsigned int) &ADC_IRQHandler,
	(unsigned int) &EXTI9_5_IRQHandler,
	(unsigned int) &TIM1_BRK_TIM9_IRQHandler,
	(unsigned int) &TIM1_UP_TIM10_IRQHanlder,
	(unsigned int) &TIM1_TRG_COM_TIM11_IRQHandler,
	(unsigned int) &TIM1_CC_IRQHandler,
	(unsigned int) &TIM2_IRQHandler,
	(unsigned int) &TIM3_IRQHandler,
	(unsigned int) &TIM4_IRQHandler,
	(unsigned int) &I2C1_EV_IRQHandler,
	(unsigned int) &I2C1_ER_IRQHandler,
	(unsigned int) &I2C2_EV_IRQHandler,
	(unsigned int) &I2C2_EV_IRQHandler,
	(unsigned int) &SPI1_IRQHandler,
	(unsigned int) &SPI2_IRQHandler,
	(unsigned int) &USART1_IRQHandler,
	(unsigned int) &USART2_IRQHandler,
	(unsigned int) &EXT15_10_IRQHandler,
	(unsigned int) &EXTI17_RTC_Alarm_IRQHandler,
	(unsigned int) &EXTI18_OTG_FS_WKUP_IRQHandler,
	(unsigned int) &DMA1_Stream7_IRQHandler,
	(unsigned int) &SDIO_IRQHandler,
	(unsigned int) &TIM5_IRQHandler,
	(unsigned int) &SPI3_IRQHandler,
	(unsigned int) &DMA2_Stream0_IRQHandler,
	(unsigned int) &DMA2_Stream1_IRQHandler,
	(unsigned int) &DMA2_Stream2_IRQHandler,
	(unsigned int) &DMA2_Stream3_IRQHandler,
	(unsigned int) &DMA2_Stream4_IRQHandler,
	(unsigned int) &OTG_FS_IRQHandler,
	(unsigned int) &DMA2_Stream5_IRQHandler,
	(unsigned int) &DMA2_Stream6_IRQHandler,
	(unsigned int) &DMA2_Stream7_IRQHandler,
	(unsigned int) &USART6_IRQHandler,
	(unsigned int) &I2C3_EV_IRQHandler,
	(unsigned int) &I2C3_ER_IRQHandler,
	(unsigned int) &FPU_IRQHandler,
	(unsigned int) &SPI4_IRQHandler,
	(unsigned int) &SPI5_IRQHandler
}

void Default_Handler(void)
{
	while (1);
}

void Reset_Handler(void)
{
	// TODO
}
