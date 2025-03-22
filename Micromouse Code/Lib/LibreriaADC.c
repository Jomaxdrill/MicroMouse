#include<LibreriaADC.h>

void configurarADC(void){
	APCTL1 = 0b00011111;//control de los puertos AD0,AD1,AD2,AD3 del modulo ADC
	ADC1SC1_ADCO = 1;//Habilitación de conversión continua
	ADC1SC1_ADCH = 0;//Selección del canal de inicio que sea AD0
	ADC1SC1_AIEN = 1;//Habilita interrupción por conversión completa 
	ADC1SC2_ACFE=1; //Habilito la función de comparación
	ADC1SC2_ACFGT=0;//La comparacion se activa cuando el valor en el registro de comparacion es menor al valor de ADC1V
	ADC1CV=240;//valor de comparacion //A DETERMINAR son 240
}

