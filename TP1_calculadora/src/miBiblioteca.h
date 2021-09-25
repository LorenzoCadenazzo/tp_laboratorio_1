/*
 * miBiblioteca.h
 *
 *  Created on: Sep 20, 2021
 *      Author: Lorenzo Cadenazzo
 */

#ifndef MIBIBLIOTECA_H_
#define MIBIBLIOTECA_H_

/** \brief Pide un numero al usuario y lo guarda
 *
 * \param numIngresado[] char se muestra en pantalla el numero
 * \return float numero ingresado por el usuario
 *
 */

float ingresarNumero(char[]);

/** \brief realiza la suma de dos números
 *
 * \param numeroUno float primer operando de la suma
 * \param numeroDos float segundo operando de la suma
 * \return float resultado de la suma
 *
 */

float sumar(float, float);

/** \brief realiza una resta entre dos números
 *
 * \param numeroUno float primer operando de la resta
 * \param numeroDos float segundo operando de la resta
 * \return float resultado de la resta
 *
 */

float restar(float, float);

/** \brief realiza una división entre dos números
 *
 * \param numeroUno float dividendo
 * \param numeroDos float divisor
 * \return float cociente
 *
 */

float dividir(float, float);

/** \brief multiplica dos números
 *
 * \param numeroUno float primer factor de la multiplicación
 * \param numeroDos float segundo factor de la multiplicación
 * \return float producto de la multiplicación
 *
 */

float multiplicar(float, float);

/** \brief calcula el factorial de un número entero
 *
 * \param numero float número del cual se calculará el factorial
 * \return long int resultado de la operación
 *
 */

long long int calcularFactorial(float);

/** \brief identifica si un numero tiene parte decimal o no
 *
 * \param numero float numero sobre el cual evaluara la presencia de decimales
 * \return int 1 si tiene parte decimal y 0 si no
 *
 */

int factorialDecimal(float);

#endif /* MIBIBLIOTECA_H_ */
