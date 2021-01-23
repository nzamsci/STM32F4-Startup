/**
  * @file STM32F411xE_startup.h
  * @author Nick Zamora <nzamora@mtu.edu>
  * 
  * @brief ISR function headers
  *
  * @todo 
  *
  */

/* Default Handler */
void Default_Handler(void);

/* Exception Handlers */
void Reset_Handler(void)							__attribute__ ((weak, alias("Default_Handler")));				
void NMI_Hander(void)								__attribute__ ((weak, alias("Default_Handler")));	
void HardFault_Hanlder(void)						__attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler(void)						__attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler(void)							__attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler(void)						__attribute__ ((weak, alias("Default_Handler")));
void SVCall_Handler(void)							__attribute__ ((weak, alias("Default_Handler")));
void Debug_Monitor_Handler(void)					__attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler(void)							__attribute__ ((weak, alias("Default_Handler")));
void Systick_Handler(void)							__attribute__ ((weak, alias("Default_Handler")));

/* Interrupt Handlers */
void WWDG_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));;
void EXTI16_PVD_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));;
void EXTI21_TAMP_STAMP_IRQHandler(void)				__attribute__ ((weak, alias("Default_Handler")));
void EXTI22_RTC_WAKEUP_IRQHandler(void)				__attribute__ ((weak, alias("Default_Handler")));
void FLASH_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void RCC_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void EXTI0_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void EXTI1_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void EXTI2_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void EXTI3_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void EXTI4_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream0_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream1_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream2_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream3_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream4_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream5_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA_Stream5_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void ADC_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void EXTI9_5_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void TIM1_BRK_TIM9_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void TIM1_UP_TIM10_IRQHanlder(void)					__attribute__ ((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM11_IRQHandler(void)			__attribute__ ((weak, alias("Default_Handler")));
void TIM1_CC_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void TIM2_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void TIM3_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void TIM4_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void I2C1_EV_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void I2C1_ER_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void I2C2_EV_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void I2C2_EV_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void SPI1_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void SPI2_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void USART1_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void USART2_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void EXT15_10_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void EXTI17_RTC_Alarm_IRQHandler(void)				__attribute__ ((weak, alias("Default_Handler")));
void EXTI18_OTG_FS_WKUP_IRQHandler(void)			__attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void SDIO_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void TIM5_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void SPI3_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream0_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream6_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream7_IRQHandler(void)					__attribute__ ((weak, alias("Default_Handler")));
void USART6_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler(void)						__attribute__ ((weak, alias("Default_Handler")));
void FPU_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void SPI4_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));
void SPI5_IRQHandler(void)							__attribute__ ((weak, alias("Default_Handler")));

