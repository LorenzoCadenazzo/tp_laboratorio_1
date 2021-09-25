/*
 ============================================================================
 Name        : TP1_calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "miBiblioteca.h"

int main()
{
	setbuf(stdout, NULL);
    int opciones;
    float numeroUno;
    float numeroDos;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    long long int resultadoFactorialUno;
    long long int resultadoFactorialDos;
    int banderaUno = 0;
    int banderaDos = 0;
    int banderaCalculo = 0;

    do
    {
        printf("Calculadora \n");
        printf("Opciones: \n");
        printf("1. Ingresar primer numero (A=%.2f)\n", numeroUno);
        printf("2. Ingresar segundo numero (B=%.2f)\n", numeroDos);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opciones);
        printf("\n");


        switch(opciones)
        {
        case 1:
            numeroUno = ingresarNumero("Ingrese el primer numero: ");
            printf("\nUsted ingreso el %.2f\n\n", numeroUno);
            banderaUno = 1;
            system("pause");
            break;

        case 2:
            if(banderaUno == 0)
            {
                printf("Error, ingrese el primer numero seleccionando opcion 1\n\n");
            }
            else
            {
                numeroDos = ingresarNumero("Ingrese el segundo numero: ");
                printf("\nUsted ingreso el %.2f\n\n", numeroDos);
                banderaDos = 1;
            }
            system("pause");
            break;

        case 3:
            if(banderaDos == 0)
            {
                printf("Error, faltan numeros. Seleccione opcion 2\n\n");
            }
            else
            {
                resultadoSuma = sumar(numeroUno, numeroDos);
                resultadoResta = restar(numeroUno, numeroDos);

                if(numeroDos != 0)
                {
                    resultadoDivision = dividir(numeroUno, numeroDos);
                }

                resultadoMultiplicacion = multiplicar(numeroUno, numeroDos);

                if(numeroUno >= 0 && factorialDecimal(numeroUno) == 0)
                {
                    resultadoFactorialUno = calcularFactorial(numeroUno);
                }

                if(numeroDos >= 0 && factorialDecimal(numeroDos) == 0)
                {
                    resultadoFactorialDos = calcularFactorial(numeroDos);
                }

                printf("Calculos realizados. Resultados disponibles.\n\n");
                banderaCalculo = 1;

            }
            system("pause");
            break;

        case 4:
            if(banderaCalculo == 0)
            {
                printf("Error, aun no se realizaron los calculos. Seleccione la opcion 3\n\n");
            }
            else
            {
                printf("Resultados obtenidos\n");
                printf("El resultado de %.2f + %.2f es: %.2f", numeroUno, numeroDos, resultadoSuma);
                printf("\nEl resultado de %.2f - %.2f es: %.2f", numeroUno, numeroDos, resultadoResta);

                if(numeroDos != 0)
                {
                    printf("\nEl resultado de %.2f / %.2f es: %.2f", numeroUno, numeroDos, resultadoDivision);
                }
                else
                {
                    printf("\nNo se puede dividir por cero. (%.2f / %.2f)", numeroUno, numeroDos);
                }

                printf("\nEl resultado de %.2f * %.2f es: %.2f", numeroUno, numeroDos, resultadoMultiplicacion);

                if(numeroUno >= 0 && factorialDecimal(numeroUno) == 0)
                {
                    printf("\nEl factorial de %.2f es: %I64d", numeroUno, resultadoFactorialUno);
                }
                else
                {
                    printf("\nNo se puede calcular el factorial de %.2f porque es menor a cero o tiene decimales", numeroUno);
                }

                if(numeroDos >= 0 && factorialDecimal(numeroDos) == 0)
                {
                    printf(" y el factorial de %.2f es: %I64d\n\n", numeroDos, resultadoFactorialDos);
                }
                else
                {
                    printf(" y no es posible calcular el factorial de %.2f porque es menor a cero o tiene decimales\n\n", numeroDos);
                }

                resultadoSuma = 0;
                resultadoResta = 0;
                resultadoDivision = 0;
                resultadoMultiplicacion = 0;
                resultadoFactorialUno = 0;
                resultadoFactorialDos = 0;
                numeroUno = 0;
                numeroDos = 0;
                banderaUno = 0;
                banderaDos = 0;
                banderaCalculo = 0;
            }
            system("pause");
            break;

        case 5:
            printf("Saliendo de la calculadora\n");
            system("pause");
            break;

        default:
            printf("No se ingreso una opcion valida, reintente\n\n");
            system("pause");
        }

        system("cls");

    }
    while(opciones !=5);

    return 0;
}
