#include<LibreriaSerial.h>

void configurarComSerial(void){
	SCI2BDL=0x23;//tasa de baudios =9600 bps ;
	SCI2C2_RE=1;//habilita recepci�n por el puerto de serial # 2
	SCI2C2_TE=1;//habilita transmisi�n por el puerto de serial # 2
    SCI2C2_RIE=1;//habilito interrupci�n por recepci�n
    SCI2C2_TIE=1;//habilito interrupci�n para transmitir
    
}



