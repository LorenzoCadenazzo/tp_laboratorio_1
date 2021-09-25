/*
 * miBiblioteca.c
 *
 *  Created on: Sep 20, 2021
 *      Author: Lorenzo Cadenazzo
 */

#include <stdio.h>
#include <stdlib.h>
#include "miBiblioteca.h"


float ingresarNumero(char numIngresado[])
{
    float numero;
    printf("%s", numIngresado);
    scanf("%f", &numero);
    return numero;
}

float sumar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno + numeroDos;
    return resultado;
}

float restar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno - numeroDos;
    return resultado;
}

float dividir(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno / numeroDos;
    return resultado;
}

float multiplicar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno * numeroDos;
    return resultado;
}

long long int calcularFactorial(float numero)
{
    int numeroEntero;
    numeroEntero = (int)numero;
    long long int resultado = 1;
    for(int i = numeroEntero; i > 0; i--)
    {
        resultado *= i;
    }
    return resultado;

}

int factorialDecimal(float numero)
{
    int respuesta;
    int numeroEntero;
    numeroEntero = (int)numero;
    if(numero-numeroEntero != 0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = 0;
    }
    return respuesta;
}
