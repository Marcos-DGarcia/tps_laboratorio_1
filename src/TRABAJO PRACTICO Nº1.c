/*
 ============================================================================
 Name        : TRABAJO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
#include "funcioncalculos.h"

#define KM 7090
#define Y 162965
#define Z 1593539

int main(void) {

	int opcionIngresada;
	int kilometros;;
	int importeBrutoY;//AEROLINEAS
	int importeBrutoZ;//LATAM
	float valorUnitarioY;
	float valorUnitarioZ;
	float pagoConDebitoY;
	float pagoConCreditoY;
	float pagoConDebitoZ;
	float pagoConCreditoZ;
	float pagoConBitY;
	float pagoConBitZ;
	float diferenciaDeImporte;
	char flagKilometros;
	char flagImportes;
	char flagCalculo;
	int submenu;
	int flagY;
	int flagZ;
	int salir;

	flagKilometros = 't';
	flagImportes = 't';
	flagCalculo = 't';
	flagY = 0;
	flagZ = 0;

	setbuf(stdout,NULL);

	do{
		system("cls");
		opcionIngresada = mostrarMenu("***************** BIENVENIDO INGRESE UNA OPCION ********************\n\n1- Ingresar Kilometros.\n2- Ingresar Valor de Vuelos.\n3- Calcular costos de vuelos.\n4- Ver resultados.\n5- Carga Forzada de Datos.\n6- Salir.\n",0,6);
		system("cls");
		switch(opcionIngresada)
		{
		case 1:
			printf("************************ 1) KILOMETROS *************************\n");
			kilometros = pedirEntero("Ingrese los kilometros:", 0, 70000);
			printf("Kilometros ingresados:%d\n",kilometros);
			if(kilometros > 0){
				flagKilometros = 'f';
			}


			break;
		case 2:
			if(flagKilometros == 'f'){
				do{
					system("cls");
					submenu = mostrarMenu("************************ 2) VALOR DE VUELOS *************************\n1-Cargar valor de Aerolineas\n2-Cargar valor de Latam\n3-Salir\n", 1, 3);
					switch (submenu){
					case 1:
						flagY = 1;
						importeBrutoY = pedirEntero("Ingrese el valor de Aerolineas: ", 0, 1500000);
						break;
					case 2:
						flagZ=1;
						importeBrutoZ = pedirEntero("Ingrese el valor de Latam: ",0,1500000);
						break;
					case 3:
						if(flagY == 1 && flagZ == 1){
							flagImportes = 'f';
						}
						break;
					}
				}while(submenu !=3);
			}
			else{
				printf("ERROR, PRIMERO DEBES INGRESAR EL KILOMETRAJE(1)\n");
				system("pause");
			}
			printf("\nValor del vuelo en Aerolineas:$%d\n",importeBrutoY);
			printf("Valor del vuelo en Latam:$%d\n\n",importeBrutoZ);

			break;
		case 3:

			if(flagImportes == 'f')
			{
				pagoConDebitoY = (float)importeBrutoY - calcularMonto(importeBrutoY,10);
				pagoConCreditoY = (float)importeBrutoY + (calcularMonto(importeBrutoY,25));
				pagoConBitY = convertirBitcoinApeso((float)importeBrutoY);
				valorUnitarioY = calcularUnitario((float)importeBrutoY, kilometros);

				pagoConDebitoZ = (float)importeBrutoZ - calcularMonto(importeBrutoZ,10);
				pagoConCreditoZ = (float)importeBrutoZ + (calcularMonto(importeBrutoZ,25));
				pagoConBitZ= convertirBitcoinApeso((float)importeBrutoZ);
				valorUnitarioZ = calcularUnitario((float)importeBrutoZ, kilometros);
				diferenciaDeImporte = diferenciaDePrecios( importeBrutoY,importeBrutoZ);
				flagCalculo = 'f';
				printf("EL CALCULO FUE REALIZADO EXIT5OSAMENTE...\n");
				restablecerVariables(kilometros,importeBrutoY,importeBrutoZ);

			}
			else{
				printf("ERROR, PRIMERO DEBES INGRESAR EL VALOR DE AMBOS VUELOS(2)\n");
			}
			system("pause");

			break;
		case 4:
			if (flagCalculo == 'f'){
				printf("************************ 4) INFORME DE COSTOS **********************\n");
				printf("Kilometros ingresados: %d\n",kilometros);
				printf("Valor en Aerolineas: $%d\n",importeBrutoY);
				printf("A)Importe final pago con debito: $%.2f\n",pagoConDebitoY);
				printf("B)Importe final pago con Credito: $%.2f\n",pagoConCreditoY);
				printf("C)Importe final pago con Bitcoin: BTC %.8f\n",pagoConBitY);
				printf("D)Importe por kilometro: $%.2f\n",valorUnitarioY);

				printf("\nValor en Latam: $%d\n",importeBrutoZ);
				printf("A)Importe final pago con debito: $%.2f\n",pagoConDebitoZ);
				printf("B)Importe final pago con Credito: $%.2f\n",pagoConCreditoZ);
				printf("C)Importe final pago con Bitcoin: BTC %.8f\n",pagoConBitZ);
				printf("D)Importe por kilometro: $%.2f\n",valorUnitarioZ);
				printf("\nLa diferencia de precios entre los vuelos es de: $%.2f\n",diferenciaDeImporte);
			}
			else{
				printf("ERROR, PRIMERO DEBES CALCULAR TODOS LOS COSTOS (3)\n");

			}
			system("pause");
			break;
		case 5:
			printf("************************ 5) CARGA FORZADA **********************\n");
			kilometros = KM;
			importeBrutoY = Y;
			importeBrutoZ = Z;

			pagoConDebitoY = (float)importeBrutoY - calcularMonto(importeBrutoY,10);
			pagoConCreditoY = (float)importeBrutoY + (calcularMonto(importeBrutoY,25));
			pagoConBitY = convertirBitcoinApeso((float)importeBrutoY);
			valorUnitarioY = calcularUnitario((float)importeBrutoY, kilometros);

			pagoConDebitoZ = (float)importeBrutoZ - calcularMonto(importeBrutoZ,10);
			pagoConCreditoZ = (float)importeBrutoZ + (calcularMonto(importeBrutoZ,25));
			pagoConBitZ= convertirBitcoinApeso((float)importeBrutoZ);
			valorUnitarioZ = calcularUnitario((float)importeBrutoZ, kilometros);

			printf("Kilometros Ingresados: %d\n",kilometros);
			printf("Valor de vuelo en Aerolineas: $%d\n",importeBrutoY);
			printf("A)Importe final pago con Debito: $%.2f\n",pagoConDebitoY);
			printf("B)Importe final pago con Credito: $%.2f\n",pagoConCreditoY);
			printf("C)Importe final pago con Bidcoin: BTC %.8f\n",pagoConBitY);
			printf("D)Importe por kilometro: $%.2f\n",valorUnitarioY);

			printf("\nValor en Latam: $%d\n",importeBrutoZ);
			printf("A)Importe final pago con Debito: $%.2f\n",pagoConDebitoZ);
			printf("B)Importe final pago con Credito: $%.2f\n",pagoConCreditoZ);
			printf("C)Importe final pago con Bitcoin: BTC %.8f\n",pagoConBitZ);
			printf("D)Importe por kilometro: $%.2f\n",valorUnitarioZ);
			printf("\nLa diferencia de precios entre los vuelos es de: $%.2f\n",diferenciaDeImporte);
			restablecerVariables(kilometros,importeBrutoY,importeBrutoZ);

			system("pause");
			break;
		case 6:
			printf("Desea salir del programa?");
			salir = continuar("\n1-Salir\n2-Continuar\n");
			if(salir ==2){
				opcionIngresada = 0;
			}
			break;
		}
	}while(opcionIngresada != 6);
	return EXIT_SUCCESS;
}
