#include<LibreriaSerial.h>

void configurarComSerial(void){
	SCI2BDL=0x23;//tasa de baudios =9600 bps ;
	SCI2C2_RE=1;//habilita recepción por el puerto de serial # 2
	SCI2C2_TE=1;//habilita transmisión por el puerto de serial # 2
    SCI2C2_RIE=1;//habilito interrupción por recepción
    SCI2C2_TIE=1;//habilito interrupción para transmitir
    
}



