/*
 * Acciones.c
 *
 *  Created on: Dec 5, 2015
 *      Author: user
 */
#include<Acciones.h>
void configurar_puente_h(void){
	PTDDD=0b00001111;//activo como salidas los bits 0,1,2,3 del puerto D
	PTDSE=0b00001111;//activo control de la pendiente para bits 0,1,2,3 del puerto D
}
void giro90der(void){
	PTDD_PTDD0=1;
	PTDD_PTDD1=0;//giro a la derecha motor 1
	PTDD_PTDD2=0;
	PTDD_PTDD3=1;//giro a la derecha motor 2
	control_vel_motor_1(100);
	control_vel_motor_2(50);
	
}
void giro90izq(void){
	PTDD_PTDD0=0;
	PTDD_PTDD1=1;//giro a la izquierda motor 1
	PTDD_PTDD2=1;
	PTDD_PTDD3=0;//giro a la izquierda motor 2
	control_vel_motor_1(50);
	control_vel_motor_2(100);
}
void giro180(void){
	PTDD_PTDD0=1;
	PTDD_PTDD1=0;//giro a la derecha motor 1
	PTDD_PTDD2=0;
	PTDD_PTDD3=1;//giro a la derecha motor 2
	control_vel_motor_1(80);
	control_vel_motor_2(80);
		
}
void derecho(void){
	PTDD_PTDD0=1;
	PTDD_PTDD1=0;//giro a la derecha motor 1
	PTDD_PTDD2=1;
	PTDD_PTDD3=0;//giro a la derecha motor 1
	control_vel_motor_1(80);
	control_vel_motor_2(80);
	
}
void parar(void){
	PTDD_PTDD0=0;
	PTDD_PTDD1=0;
	PTDD_PTDD2=0;
	PTDD_PTDD3=0;
	
    
}

void control_vel_motor_1(int ref){
	int u1 =0;//señal de control 1 
	int error1=0;//error motor 1
	int vel1=0;//velocidad angular motor 1
	while(error1>50){//determianr el rango aceptable de error
		//vel1=30/((1.85*10^-7)*(TPM1C1V));//velocidad angular actual//AJUSTAR CONTROL A PULSOS
		error1=ref-vel1;
		//determinar valor k1    u=k1 *error1;
		//saturacion al actuador
					if(u1>100){
						u1=100;
					}
					if(u1<-100){
						u1=-100;
						
					}
		TPM2C0V=u1;//hacemos el valor de u igual a el ciclo duty necesario 
			//mirar si toca hacer una cte
	}
	
	
	
}
void control_vel_motor_2(int ref){
	int u2 =0;//señal de control 1 
	int error2=0;//error motor 1
	int vel2=0;//
	while(error2>50){//determinar el rango aceptable de error
			//vel2=30/((1.85*10^-7)*(TPM1C1V));//velocidad angular actual//AJUSTAR CONTROL A PULSOS
			error2=ref-vel2;
			//determinar valor k1    u=k1 *error1;
			//saturacion al actuador
			if(u2>100){
				u2=100;
			}
			if(u2<-100){
				u2=-100;
				
			}
			TPM2C1V=u2;//hacemos el valor de u igual a el ciclo duty necesario 
				//mirar si toca hacer una cte
		}
}

	

