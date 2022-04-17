/*
 * funcion.h
 *
 *  Created on: 9 abr. 2022
 *      Author: Marcos
 */

#ifndef FUNCION_H_
#define FUNCION_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * @briefEsta funcion solicita al usuario ingresar un dato del tipo int.
 *
 * @paramEste parametro indica el mensaje de error.
 * @paramEste parametro indica el rango minimo para la validacion.
 * @paramEste paramtro indica el rango maximo para la validacion.
 * @returnDevuelve el dato ingresado y validado.
 */
int pedirEntero(char[],int,int);
/**
 * @briefEsta funcion es utilizada para mostran un menu.
 *
 * @paramEste parametro indica el mensaje al usuario.
 * @paramEste parametro indica el valor minimo ded opciones que tiene el menu.
 * @paramEste parametro indica el valor maximo de las opciones que tiene el menu.
 * @returnDevuelve la opcion seleccionada por el usuario.
 */
int mostrarMenu(char[],int,int);
/**
 * @briefFuncion utilizada para validad un dato de tipo entero.
 *
 * @paramEste parametro indica el mensaje al usuario.
 * @paramEste paramtetro indica el numero que tenemos que validar.
 * @paramEste paramtro indica la numero minimo del rango.
 * @paramEste parametro indica el numero maximo del rango.
 * @returnDevuelve el dato entero validado.
 */
int validarEntero(char[],int,int,int);
/**
 * @brieffuncion utilizada para preguntar al usuario si desea continuar con la ejecucion.
 *
 * @parammensaje para mostrar al usuario.
 * @returnnumero entero queindica la opcion ingresada por el usuario.
 */

int continuar (char[]);
#endif /* FUNCION_H_ */

