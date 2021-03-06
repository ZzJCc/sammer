/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/stm32f10x_it.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and 
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTI
  
  AL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_it.h"
//#include "bsp_adc.h"
//#include "bsp_usart.h"
//#include "bsp_timbase.h"
//#include "bsp_generaltime.h"
#include "bsp_encoder_Tim3.h"

extern __IO uint16_t ADC_ConvertedValue;

extern void TimingDelay_Decrement(void);

/** @addtogroup STM32F10x_StdPeriph_Template
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M3 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

//void GENERAL_TIM_INT_FUN(void)
//{
//        if(TIM_GetITStatus(GENERAL_TIM, TIM_IT_Update) != RESET)
//    {
//        TIM_ICUserValueStructure.Capture_Period++;
//        TIM_ClearITPendingBit(GENERAL_TIM, TIM_FLAG_Update);
//    }
//    
//    if(TIM_GetITStatus(GENERAL_TIM, GENERAL_TIM_IT_CCx) != RESET)
//    {
//        if(TIM_ICUserValueStructure.Capture_StartFlag == 0)
//        {
//            /* 计数器清零 */
//            TIM_SetCounter(GENERAL_TIM, 0);
//            /* 自动重装寄存器更新标志清0 */
//            TIM_ICUserValueStructure.Capture_Period = 0;
//            /* 存捕获比较寄存器的值的变量的值清0 */
//            TIM_ICUserValueStructure.Capture_CcrValue = 0;
//            /* 当第一次捕获到上升沿之后，就把捕获边沿配置为下降沿 */
//            GENERAL_TIM_OCxPolarityConfig_FUN(GENERAL_TIM, TIM_ICPolarity_Falling);
//            /* 开始捕获标准置1 */
//            TIM_ICUserValueStructure.Capture_StartFlag = 1;
//        }
//        else
//        {
//            TIM_ICUserValueStructure.Capture_CcrValue = GENERAL_TIM_GetCapturex_FUN(GENERAL_TIM);
//            
//            GENERAL_TIM_OCxPolarityConfig_FUN(GENERAL_TIM, TIM_ICPolarity_Rising);
//            /* 开始捕获标志清0 */
//            TIM_ICUserValueStructure.Capture_StartFlag = 0;
//            /* 捕获完成标志置1 */
//            TIM_ICUserValueStructure.Capture_FinishFlag = 1;
//        }
//        TIM_ClearITPendingBit(GENERAL_TIM, GENERAL_TIM_IT_CCx);
//    }
//}

//void ADC_IRQHandler(void)
//{	
//	if (ADC_GetITStatus(ADCx, ADC_IT_EOC) == SET) 
//	{
//		// 读取ADC的转换值
//		ADC_ConvertedValue = ADC_GetConversionValue(ADCx);
//	}
//	ADC_ClearITPendingBit(ADCx,ADC_IT_EOC);
//}

//void DEBUG_USART_IRQHandler(void)
//{
//    uint8_t ucTemp;
//    if(USART_GetITStatus(DEBUG_USARTx, USART_IT_RXNE) != RESET)
//    {
//        ucTemp = USART_ReceiveData(DEBUG_USARTx);
//        USART_SendData(DEBUG_USARTx, ucTemp);
//    }
//}

//void BASIC_TIM_IRQHandler(void)
//{
//    vBASIC_TIM_IRQHandler();
//}


/******************************************************************************/
/*                 STM32F10x Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f10x_xx.s).                                            */
/******************************************************************************/

/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */ 


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
