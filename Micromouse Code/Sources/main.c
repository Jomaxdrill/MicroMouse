#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include <Leds.h>
#include <LibreriaADC.h>
#include <LibreriaIRQ.h>
#include <LibreriaReloj.h>
#include <LibreriaSerial.h>
#include <LibreriaTPM.h>
#include <Acciones.h>


//si vale 1 detecto pared,si vale 0 no hay pared 
char Dl;//sensor lateral lado izq
char Dfl;//sensor de frente lado izq
char Dr;//sensor de frente lado der
char Dfr;//sensor lateral lado derecho

void main(void) {
 Dl=0;//sensor lateral lado izq
 Dfl=0;//sensor de frente lado izq
 Dr=0;//sensor de frente lado der
 Dfr=0;//sensor lateral lado derecho
	configurarCLK();
	configurarADC();
	configurarleds();
	configurarIRQ();
	configurarComSerial();
	configurarTPM();

  EnableInterrupts;
  /* include your code here */
 for(;;){
	  ADC1SC1_ADCH ++;
			if(ADC1SC1_ADCH>3){
				ADC1SC1_ADCH=0;
					 }
	 
	 if ( ( (!Dr) && (!Dfl) && (!Dfr) ) || ( (!Dr) && Dfl && Dfr)){
		 giro90der();
	 }
	 if ( (!Dr) && (!Dfl) && Dfr )
		 {
		 	
			 giro90der();
		 }
		 if( (!Dr) && Dfl && Dfr)
		 {
			 giro90der();
		 }
		 if(Dr && (!Dfl) && (!Dfr) ) 
		 {
			 derecho();
		 }

		 if ( (!Dl) && Dr && (!Dfl) && Dfr)
		 {
			 giro90izq();
		 	
		 }
		 if( (!Dl) && Dr && Dfl && (!Dfr) )
		 {
			 giro90izq();
		 }
		 if( (!Dl) && Dr && Dfl && Dfr)
		 {
		 	
			 giro90izq();
		 }
		 if(Dl && Dr && (!Dfl) && Dfr)
		 {
		 	
		 				giro180();
		 }
		 if(Dl && Dr && Dfl && (!Dfr))
		 {
		 	
		 				giro180();
		 }

		 if(Dl && Dr && Dfl && Dfr)
		 {
		 	
		 				giro180();
		 }
				  
	 Dl=0;//sensor lateral lado izq
	 Dfl=0;//sensor de frente lado izq
	 Dr=0;//sensor de frente lado der
	 Dfr=0;//sensor lateral lado derecho
}
}
//Interrupción por recepción de serial
//si llega algo a el puerto Rxd2 se verificará que orden se le pide al micromouse
interrupt VectorNumber_Vsci2rx Rxd2serial(void){}
interrupt VectorNumber_Virq Encendido(void){
	
}
/*interrupt VectorNumber_Vtpm1ch0 Encoder0(void){}
interrupt VectorNumber_Vtpm1ch1 Encoder01(void){}
interrupt VectorNumber_Vtpm1ch2 Encoder1(void){}
interrupt VectorNumber_Vtpm1ch3 Encoder11(void){}*/
interrupt VectorNumber_Vadc1 Sensores(void){
	switch(ADC1SC1_ADCH){
	case 0:
		Dl=1;
		break;
	case 1:
		Dfl=1;
		break;
	case 2:
		Dr=1;
		break;
	case 3:
		Dfr=1;
		break;
	default:
		break;
	}
}



