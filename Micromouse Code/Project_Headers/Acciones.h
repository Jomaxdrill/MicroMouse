/*
 * Acciones.h
 *
 *  Created on: Dec 5, 2015
 *      Author: user
 */

#ifndef ACCIONES_H_
#define ACCIONES_H_
#include <mc9s08aw60.h>
void configurar_puente_h(void);
void giro90der(void);
void giro90izq(void);
void giro180(void);
void derecho(void);
void parar(void);
void control_vel_motor_1(int ref);
void control_vel_motor_2(int ref);
void logica();
#endif /* ACCIONES_H_ */
