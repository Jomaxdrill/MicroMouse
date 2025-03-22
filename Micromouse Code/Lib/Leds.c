/*
 * Leds.c
 *
 *  Created on: Dec 5, 2015
 *      Author: user
 */
#include<Leds.h>
void configurarleds(void){
	//configuracion leds emisores
	PTGDD =0b00001111;//activo como salidas los bits 0,1,2,3 del puerto G
	PTGSE=0b00001111;//activo control de la pendiente para bits 0,1,2,3 del puerto G
	//configuracion indicadores
	    PTADD=0b00000011;//activo como salidas los bits 0,1, del puerto A 
		PTASE=0b00000011;//activo control de la pendiente para bits 0,1 del puerto A
		PTCDD=0b00000011;//activo como salidas los bits 0,1, del puerto C 
		PTCSE=0b00000011;//activo control de la pendiente para bits 0,1 del puerto C
}
