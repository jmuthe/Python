/*
 * main.h
 *
 *  Created on: 12 Mar 2022
 *      Author: Justin
 */

#ifndef MAIN_H_
#define MAIN_H_
 typedef struct{
	uint32_t GPIOAEN:1;
	uint32_t GPIOBEN:1;
	uint32_t GPIOCEN:1;
	uint32_t GPIODEN:1;
	uint32_t GPIOEEN:1;
	uint32_t GPIOFEN:1;
	uint32_t GPIOGEN:1;
	uint32_t GPIOHEN:1;


}rcc_ahb1_t;

typedef struct{
	uint32_t MODER0:2;
	uint32_t MODER1:2;
	uint32_t MODER2:2;
	uint32_t MODER3:2;
	uint32_t MODER4:2;
	uint32_t MODER5:2;
	uint32_t MODER6:2;
	uint32_t MODER7:2;
	uint32_t MODER8:2;
	uint32_t MODER9:2;
	uint32_t MODER10:2;
	uint32_t MODER11:2;
	uint32_t MODER12:2;
	uint32_t MODER13:2;
	uint32_t MODER14:2;
	uint32_t MODER15:2;

}gpiox_moder_t;


typedef struct {
	uint32_t odr0 :1;
	uint32_t odr1 :1;
	uint32_t odr2 :1;
	uint32_t odr3 :1;
	uint32_t odr4 :1;
	uint32_t odr5 :1;
	uint32_t odr6 :1;
	uint32_t odr7 :1;
	uint32_t odr8 :1;
	uint32_t odr9 :1;
	uint32_t odr10 :1;
	uint32_t odr11 :1;
	uint32_t odr12 :1;
	uint32_t odr13 :1;
	uint32_t odr14 :1;
	uint32_t odr15 :1;
	uint32_t Reserved :16;

}gpiox_odr_t;

typedef struct {
	uint32_t idr0 :1;
	uint32_t idr1 :1;
	uint32_t idr2 :1;
	uint32_t idr3 :1;
	uint32_t idr4 :1;
	uint32_t idr5 :1;
	uint32_t idr6 :1;
	uint32_t idr7 :1;
	uint32_t idr8 :1;
	uint32_t idr9 :1;
	uint32_t idr10 :1;
	uint32_t idr11 :1;
	uint32_t idr12 :1;
	uint32_t idr13 :1;
	uint32_t idr14 :1;
	uint32_t idr15 :1;
	uint32_t Reserved :16;

}gpiox_idr_t;


typedef struct{
	uint32_t pupdr0:2;
	uint32_t pupdr1:2;
	uint32_t pupdr2:2;
	uint32_t pupdr3:2;
	uint32_t pupdr4:2;
	uint32_t pupdr5:2;
	uint32_t pupdr6:2;
	uint32_t pupdr7:2;
	uint32_t pupdr8:2;
	uint32_t pupdr9:2;
	uint32_t pupdr10:2;
	uint32_t pupdr11:2;
	uint32_t pupdr12:2;
	uint32_t pupdr13:2;
	uint32_t pupdr14:2;
	uint32_t pupdr15:2;

}gpiox_pupdr_t;

uint32_t * s;




#endif /* MAIN_H_ */
