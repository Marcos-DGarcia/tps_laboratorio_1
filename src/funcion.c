/*
 * funcion.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Marcos
 */
//BIBLIOTECA DE PEDIDOS Y VALIDACIONES
#include "funcion.h"
#include "funcioncalculos.h"

int pedirEntero(char mensaje[],int numeroMinimo, int numeroMaximo){
	int numeroIngresado;
	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);
	numeroIngresado = validarEntero("DATO INVALIDO, INTENTELO NUEVAMENTE: ",numeroIngresado,numeroMinimo,numeroMaximo);
	return numeroIngresado;
}

int validarEntero(char mensaje[],int numeroIngresado,int valorMinimo, int valorMaximo){

	while (numeroIngresado < valorMinimo || numeroIngresado > valorMaximo){
		printf("%s",mensaje);
		scanf("%d",&numeroIngresado);
	}
	return numeroIngresado;
}
int mostrarMenu(char mensaje [],int minimo,int maximo){

	int opcionIngresada;
	printf("%s",mensaje);
	opcionIngresada = pedirEntero("Ingrese una opcion:", minimo, maximo );

	return opcionIngresada;
}
int continuar(char mensaje[]){
	int respuesta;
	printf("%s",mensaje);
	scanf("%d",&respuesta);
	while(respuesta != 1 && respuesta != 2){
		printf("ERROR,DATO NO VALIDO(1= Si // 2= No)");
		scanf("%d",&respuesta);
	}
	return respuesta;

}
