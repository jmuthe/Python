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
#define GPIOD_IDR		(GPIOD + 0x10)
#define GPIOD_PUPDR		(GPIOD + 0x0C)
#define GPIOA			0x40020000
#define	GPIOA_MODER		(GPIOA + 0)
#define	GPIOA_IDR		(GPIOA + 0x10)
#define	GPIOA_PUPDR     (GPIOA+ 0x0C)

int main(void)
{

	initialise_monitor_handles();
	rcc_ahb1_t* 	p_rcc_ahb1=(rcc_ahb1_t*) RCC_AHB1;
	gpiox_moder_t * p_gpioa_moder = (gpiox_moder_t * )GPIOA_MODER;
	gpiox_moder_t * p_gpiod_moder = (gpiox_moder_t * )GPIOD_MODER;
	gpiox_odr_t* 	p_gpiod_odr  = (gpiox_odr_t*) GPIOD_ODR;
	gpiox_idr_t* 	p_gpioa_idr  = (gpiox_idr_t*) GPIOA_IDR;
	gpiox_pupdr_t* 	p_gpiod_pupdr=(gpiox_pupdr_t*) GPIOD_PUPDR;
	gpiox_idr_t*	p_gpiod_idr	=  (gpiox_idr_t*) GPIOD_IDR;
	char key;

/*This sets the clocks on the registers A and D*/
	//p_rcc_ahb1->GPIOAEN=1;
	p_rcc_ahb1->GPIODEN=1;



	p_gpiod_moder->MODER0=1;//Set PD0 to output
	p_gpiod_moder->MODER1=1;//Set PD1 to output
	p_gpiod_moder->MODER2=1;//Set PD2 to output
	p_gpiod_moder->MODER3=1;//Set PD3 to output

	p_gpiod_moder->MODER8=0;//Set PD8 to input
	p_gpiod_moder->MODER9=0;//Set PD9 to input
	p_gpiod_moder->MODER10=0;//Set PD10 to input
	p_gpiod_moder->MODER11=0;//Set PD11 to input



	p_gpiod_pupdr->pupdr8=0x01; //Set PD8 to pull-up
	p_gpiod_pupdr->pupdr9=0x01; //Set PD9 to pull-up
	p_gpiod_pupdr->pupdr10=0x01; //Set PD10 to pull-up
	p_gpiod_pupdr->pupdr11=0x01; //Set PD11 to pull-up


	while(1)
	{
	//Make all row GPIOs HIGH state
	p_gpiod_odr->odr0=1;
	p_gpiod_odr->odr1=1;
	p_gpiod_odr->odr2=1;
	p_gpiod_odr->odr3=1;

	//Make R1 low
	p_gpiod_odr->odr0=0;
	if (p_gpiod_idr->idr8==0)
	{
		for (uint32_t i=0; i<1000000; i++);
		key='1';
		printf("%c\n",key);
	}
	if (p_gpiod_idr->idr9==0)
		{
			for (uint32_t i=0; i<1000000; i++);
			key='2';
			printf("%c\n",key);
		}

	if (p_gpiod_idr->idr10==0)
			{
				for (uint32_t i=0; i<1000000; i++);
				key='3';
				printf("%c\n",key);
			}


	if (p_gpiod_idr->idr11==0)
			{
				for (uint32_t i=0; i<1000000; i++);
				key='A';
				printf("%c\n",key);
			}

	//Make R2 low
	p_gpiod_odr->odr0=1;
	p_gpiod_odr->odr1=1;
	p_gpiod_odr->odr2=1;
	p_gpiod_odr->odr3=1;
	p_gpiod_odr->odr1=0;
		if (p_gpiod_idr->idr8==0)
		{
			for (uint32_t i=0; i<1000000; i++);
			key='4';
			printf("%c\n",key);
		}
		if (p_gpiod_idr->idr9==0)
			{
				for (uint32_t i=0; i<1000000; i++);
				key='5';
				printf("%c\n",key);
			}

		if (p_gpiod_idr->idr10==0)
				{
					for (uint32_t i=0; i<1000000; i++);
					key='6';
					printf("%c\n",key);
				}


		if (p_gpiod_idr->idr11==0)
				{
					for (uint32_t i=0; i<1000000; i++);
					key='B';
					printf("%c\n",key);
				}


//Make R3 low
	p_gpiod_odr->odr0=1;
	p_gpiod_odr->odr1=1;
	p_gpiod_odr->odr2=1;
	p_gpiod_odr->odr3=1;
	p_gpiod_odr->odr2=0;
		if (p_gpiod_idr->idr8==0)
		{
			for (uint32_t i=0; i<1000000; i++);
			key='7';
			printf("%c\n",key);
		}
		if (p_gpiod_idr->idr9==0)
			{
				for (uint32_t i=0; i<1000000; i++);
				key='8';
				printf("%c\n",key);
			}

		if (p_gpiod_idr->idr10==0)
				{
					for (uint32_t i=0; i<1000000; i++);
					key='9';
					printf("%c\n",key);
				}


		if (p_gpiod_idr->idr11==0)
				{
					for (uint32_t i=0; i<1000000; i++);
					key='C';
					printf("%c\n",key);
				}


	//Make R4 low
		p_gpiod_odr->odr0=1;
		p_gpiod_odr->odr1=1;
		p_gpiod_odr->odr2=1;
		p_gpiod_odr->odr3=1;
		p_gpiod_odr->odr3=0;
			if (p_gpiod_idr->idr8==0)
			{
				for (uint32_t i=0; i<1000000; i++);
				key='*';
				printf("%c\n",key);
			}
			if (p_gpiod_idr->idr9==0)
				{
					for (uint32_t i=0; i<1000000; i++);
					key='0';
					printf("%c\n",key);
				}

			if (p_gpiod_idr->idr10==0)
					{
						for (uint32_t i=0; i<1000000; i++);
						key='#';
						printf("%c\n",key);
					}


			if (p_gpiod_idr->idr11==0)
					{
						for (uint32_t i=0; i<1000000; i++);
						key='D';
						printf("%c\n",key);
					}


	}








}
