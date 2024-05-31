/*
 * Port_PBcfg.c
 *
 *  Created on: Apr 11, 2024
 *      Author: mustafa
 */
 /******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with PORT_Init API */
const Port_ConfigType Port_Configuration = {
                                            PORTA,PA0,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA1,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA2,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA3,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA4,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA5,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA6,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTA,PA7,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,

                                            PORTB,PB0,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB1,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB2,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB3,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB4,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB5,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB6,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTB,PB7,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,

                                            PORTC,PC0,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC1,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC2,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC3,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC4,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC5,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC6,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTC,PC7,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,

                                            PORTD,PD0,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTD,PD1,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTD,PD2,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTD,PD3,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTD,PD4,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTD,PD5,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTD,PD6,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,

                                            PORTE,PE0,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTE,PE1,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTE,PE2,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTE,PE3,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTE,PE4,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTE,PE5,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,

                                            PORTF,PF0,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTF,PF1,OUTPUT,OFF,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTF,PF2,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTF,PF3,INPUT,PULL_DOWN,STD_LOW,DIO,STD_OFF,STD_OFF,
                                            PORTF,PF4,INPUT,PULL_UP,STD_LOW,DIO,STD_OFF,STD_OFF,
                                         };
