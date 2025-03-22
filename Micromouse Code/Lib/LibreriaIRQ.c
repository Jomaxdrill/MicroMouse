/*
 * LibreriaIRQ.c
 *
 *  Created on: Dec 5, 2015
 *      Author: user
 */
#include <LibreriaIRQ.h>
//Configuraci�n del encendido del micro
void configurarIRQ(void){
	IRQSC_IRQEDG=0;//selecciona detecci�n para flanco de bajada
	IRQSC_IRQPE=1;//habilita el pin de IRQ
	IRQSC_IRQIE=1;//habilito interrupxi�n por irq
	IRQSC_IRQMOD=0;//la detecci�n es solo por flanco
}
