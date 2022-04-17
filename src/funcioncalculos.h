/*
 * funcioncalculos.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Marcos
 */

#ifndef FUNCIONCALCULOS_H_
#define FUNCIONCALCULOS_H_

/**
 * @briefEsta funcion calcula el monto que representa el porcentaje en un entero
 *
 * @paramnumero 1 entero para realizar el producto.
 * @paramnumero 2 porcentaje a operar.
 * @returndevuelvo el producto de ambos parametros.
 */
float calcularMonto(int,int);
/**
 * @briefEsta funcion convierte la cantidad de pesos indicada por parametro en una cantidad de bidcoin.
 *
 * @paramEste parametro indica la cantidad de pesos que se van a convertir en bidcoin.
 * @returnDevuelve en el resultado de la operacion, la cantidad de bitcoin convertidos por la funcion.
 */
float convertirBitcoinApeso (float numero);
/**
 * @briefEsta funcion calcula el importe unitario de un producto o servicio.
 *
 * @paramnumero1 indica el importe total del producto o servicio.
 * @paramnumero2 indica la cantidad total del producto o servicio.
 * @returnDevuelve el resto de la divion entre el perametro 1 y el paramtro 2.
 */
float calcularUnitario(int numero1,int numero2);
/**

 * @briefEsta funcion calcula la diferencia entre 2 enteros
 *
 * @paramnumero1 Primer valor a operar.
 * @paramnumero2 Segundo valor a operar.
 * @returnDevuelve el resultado de la resta.
 */
float diferenciaDePrecios(float numero1, float numero2);
/**
 * @briefEsta funcion restablece a 0 el valor de una variable.
 * @paramEste parametro indica la primer variable a restablecer.
 * @paramEste parametro indica la segunda variable a restablecer.
 * @paramEste parametro indica la tercer variable a restablecer.
 */
void restablecerVariables (int variable1, float variable2, float variable3);

#endif /* FUNCIONCALCULOS_H_ */
