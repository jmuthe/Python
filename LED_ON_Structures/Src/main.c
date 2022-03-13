/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "main.h"



#define RCC				0x40023800
#define RCC_AHB1 		(RCC+ 0x30)
#define GPIOD 			0x40020C00
#define GPIOD_MODER		GPIOD
#define GPIOD_ODR		(GPIOD + 0x14)
#define GPIOA			0x40020000
#define	GPIOA_MODER		(GPIOA + 0)
#define	GPIOA_IDR		(GPIOA + 0x10)
#define	GPIOA_PUPDR     (GPIOA+ 0x0C)

int main(void)
{

	rcc_ahb1_t* 	p_rcc_ahb1=(rcc_ahb1_t*) RCC_AHB1;
	gpiox_moder_t * p_gpioa_moder = (gpiox_moder_t * )GPIOA_MODER;
	gpiox_moder_t * p_gpiod_moder = (gpiox_moder_t * )GPIOD_MODER;
	gpiox_odr_t* 	p_gpiod_odr  = (gpiox_odr_t*) GPIOD_ODR;
	gpiox_idr_t* 	p_gpioa_idr  = (gpiox_idr_t*) GPIOA_IDR;
	gpiox_pupdr_t* 	p_gpiox_pupdr=(gpiox_pupdr_t*) GPIOA_PUPDR;



/*This sets the clocks on the registers A and D*/
	p_rcc_ahb1->GPIOAEN=1;
	p_rcc_ahb1->GPIODEN=1;



	p_gpiod_moder->MODER12=1;//Set PD12 to output
	p_gpiod_moder->MODER13=1;//Set PD13 to output
	p_gpioa_moder->MODER0=0; //Set PA0 to input
	p_gpioa_moder->MODER12=1; //Set PA12 to output

	p_gpiox_pupdr->pupdr12=0x01; //Set PD12 to pull-up
	p_gpiox_pupdr->pupdr13=0x01; //Set PD12 to pull-down

	while(1)
	{
		if (p_gpioa_idr->idr0==0)  //If PA0 is low
		{
			p_gpiod_odr->odr13 =1;   //Make PD13 high
			p_gpiod_odr->odr12=0;    //Make PD12 low
			for (uint32_t i=0; i<1000000; i++);
			p_gpiod_odr->odr13 =0;  //Make PD13 low
			p_gpiod_odr->odr12=1;	//Make PD13 low
			for (uint32_t i=0; i<1000000; i++);
		}
		else
		{
			p_gpiod_odr->odr13 =1;//Make PD13 high
			p_gpiod_odr->odr12=0;//Make PD12 low

			for (uint32_t i=0; i<100000; i++);
			p_gpiod_odr->odr13 =0;//Make PD13 low
			p_gpiod_odr->odr12=1;//Make PD12 high
			for (uint32_t i=0; i<100000; i++);
		}



	}

}
