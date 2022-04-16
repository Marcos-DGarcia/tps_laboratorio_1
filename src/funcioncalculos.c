/*
 * funcioncalculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Marcos
 */

//BIBLIOTECA DE CALCULOS:

#include "funcioncalculos.h"
#include "funcion.h"

float calcularMonto(int numero, int porcentaje){
	float resultado;
	resultado = ((float)numero * porcentaje)/100;
	return resultado;
}
float convertirBitcoinApeso (float numero){
	float resultado;
	float valorbit;
	valorbit = 4606954.55;// USAR DOOBLE %lf
	resultado = (numero / valorbit);
	return resultado;
}
float calcularUnitario(int numero1,int numero2){
	float resultado;
	resultado = numero1/numero2;
	return resultado;
}
float diferenciaDePrecios(float numero1, float numero2){
	float resultado;
	if(numero1 > numero2){
		resultado = numero1 - numero2;
	}
	else{
		resultado = numero2 - numero1;
	}
	return resultado;
}
void restablecerVariables (int variable1, float variable2, float variable3){
	variable1 = 0;
	variable2 = 0;
	variable3 = 0;

}


