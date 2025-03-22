#include <LibreriaReloj.h>
//CONFIGURA EL RELOJ PARA SER DE 5.4 MHz
void configurarCLK(void){	
	ICGC1= 0x28;
	ICGC2= 0x70;
}
