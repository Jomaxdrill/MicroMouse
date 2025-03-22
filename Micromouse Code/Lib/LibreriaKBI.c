/*
 * LibreriaKBI.c
 *
 *  Created on: Dec 5, 2015
 *      Author: user
 */
#include<LibreriaKBI.h>

void configurarKBI(void){
	KBI1SC_KBEDG=0b1111;//configuro el kbi por flanco de subida 
	KBISC_KBIE=1;//activo interrupción por KBI 
	KBI1PE=0b00001111;//activo bits 0,1,2,3 del puerto G como kbi
}
