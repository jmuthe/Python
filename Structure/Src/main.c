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

 struct RCC_AHB1_s{
	uint32_t GPIOAEN:1;
	uint32_t GPIOBEN:1;
	uint32_t GPIOCEN:1;
	uint32_t GPIODEN:1;
	uint32_t GPIOEEN:1;
	uint32_t GPIOFEN:1;
	uint32_t GPIOGEN:1;
	uint32_t GPIOHEN:1;


}RCC_AHB1_t;

union {

	 struct
	{
		uint32_t GPIOAEN:1;
		uint32_t GPIOBEN:1;
		uint32_t GPIOCEN:1;
		uint32_t GPIODEN:1;
		uint32_t GPIOEEN:1;
		uint32_t GPIOFEN:1;
		uint32_t GPIOGEN:1;
		uint32_t GPIOHEN:1;
	}RCC_AHB1_t;

	uint8_t RCC_AHB1_US;
}RCC_AHB1_ut;

uint32_t * s;


int main(void)
{

	uint32_t * RCC= (uint32_t*) 0x40023800;
	uint32_t * RCC_AHB1 =RCC +12;
	uint32_t * GPIOD= 0x40020C00;
	uint32_t * GPIOD_MODER= GPIOD + 0;
	uint32_t * GPIOD_ODR= GPIOD + 5;
	uint32_t * GPIOA= 0x40020000 ;
	uint32_t * GPIOA_MODER= GPIOA + 0;
	uint32_t * GPIOA_IDR= GPIOA + 4;
	uint32_t * GPIOA_PUPDR= GPIOA + 3;



	/*****Reading from RCC_AHB1 register******/

	*RCC_AHB1 |=1<<3; //Set GPIOD clock
	*RCC_AHB1 |=1<<2; //Set GPIOC clock
	*RCC_AHB1 |=1<<0; //Set GPIOA clock


	//The Structure is reading
	s=*RCC_AHB1;
	struct RCC_AHB1_s*  RCC_AHB1_t;
	RCC_AHB1_t=&s;

	//Now the Union is reading
	RCC_AHB1_ut.RCC_AHB1_US=*RCC_AHB1;

	/**Other way to read.***/
	*RCC_AHB1 &=~(1<<2); //Reset GPIOC
	*RCC_AHB1 |=1<<5; //Set GPIOF clock

	//Structure Reads
	RCC_AHB1_t->GPIOAEN= (*RCC_AHB1 & 1<<0)>>0;
	RCC_AHB1_t->GPIOBEN= (*RCC_AHB1 & 1<<1)>>1;
	RCC_AHB1_t->GPIOCEN= (*RCC_AHB1 & 1<<2)>>2;
	RCC_AHB1_t->GPIODEN= (*RCC_AHB1 & 1<<3)>>3;
	RCC_AHB1_t->GPIOEEN= (*RCC_AHB1 & 1<<4)>>4;
	RCC_AHB1_t->GPIOFEN= (*RCC_AHB1 & 1<<5)>>5;
	RCC_AHB1_t->GPIOGEN= (*RCC_AHB1 & 1<<6)>>6;
	RCC_AHB1_t->GPIOHEN= (*RCC_AHB1 & 1<<7)>>7;

	//Now I am reading using Unions
	RCC_AHB1_ut.RCC_AHB1_t.GPIOAEN=(*RCC_AHB1 & 1<<0)>>0;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOBEN=(*RCC_AHB1 & 1<<1)>>1;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOCEN=(*RCC_AHB1 & 1<<2)>>2;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIODEN=(*RCC_AHB1 & 1<<3)>>3;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOEEN=(*RCC_AHB1 & 1<<4)>>4;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOFEN=(*RCC_AHB1 & 1<<5)>>5;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOGEN=(*RCC_AHB1 & 1<<6)>>6;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOHEN=(*RCC_AHB1 & 1<<7)>>7;




	//Writing to RCC_AHB1 register
	s=0x4A;
	*RCC_AHB1=s;


	//Another way to write to RCC_AHB1 register
	RCC_AHB1_t->GPIOAEN= 1;
	RCC_AHB1_t->GPIOBEN= 0;
	RCC_AHB1_t->GPIOCEN= 0;
	RCC_AHB1_t->GPIODEN= 1;
	RCC_AHB1_t->GPIOEEN= 0;
	RCC_AHB1_t->GPIOFEN= 1;
	RCC_AHB1_t->GPIOGEN= 1;
	RCC_AHB1_t->GPIOHEN= 0;
	 *RCC_AHB1=s;

	 //Another way to write to RCC_AHB1 register using unions
	 RCC_AHB1_ut.RCC_AHB1_US=0x93;
	 *RCC_AHB1= RCC_AHB1_ut.RCC_AHB1_US;

	 //Another way to write to RCC_AHB1 register using unions

	 RCC_AHB1_ut.RCC_AHB1_t.GPIOAEN=1;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOBEN=0;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOCEN=1;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIODEN=1;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOEEN=0;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOFEN=1;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOGEN=1;
	 RCC_AHB1_ut.RCC_AHB1_t.GPIOHEN=0;
	 *RCC_AHB1=RCC_AHB1_ut.RCC_AHB1_US;




	 * GPIOD_MODER &=~(5<<24);
	* GPIOD_MODER |=0x05<<24 ;// Set  PD13 and PD12 to output
	* GPIOA_MODER &=~(1<<0) ;// Set  PA0 to input
	* GPIOA_PUPDR &=~(3<<0);
	* GPIOA_PUPDR |=(2<<0);


	while(1)
	{
		uint32_t j= * GPIOA_IDR & 1<<0;
		if (j==0)
		{
			* GPIOD_ODR	|= 1<<13  ; //Set PD13 to high
			* GPIOD_ODR &= ~(1<<12) ;//Set PD12 to low
			for (uint32_t i=0; i<1000000; i++);
			* GPIOD_ODR &= ~(1<<13) ;//Set PD13 to low
			* GPIOD_ODR	|= 1<<12  ; //Set PD12 to high
			for (uint32_t i=0; i<1000000; i++);
		}
		else
		{
			* GPIOD_ODR	|= 1<<13  ; //Set PD13 to high
			* GPIOD_ODR &= ~(1<<12) ;//Set PD12 to low
			for (uint32_t i=0; i<100000; i++);
			* GPIOD_ODR &= ~(1<<13) ;//Set PD13 to low
			* GPIOD_ODR	|= 1<<12  ; //Set PD12 to high
			for (uint32_t i=0; i<100000; i++);
		}






	}

}
