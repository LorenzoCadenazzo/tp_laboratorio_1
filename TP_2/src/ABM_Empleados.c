/*
 ============================================================================
 Name        : ABM_Empleados.c
 Author      : Lorenzo Cadenazzo
 Version     : 1.2 14/10/2021
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ArrayEmployees.h"
#include "misFunciones.h"


int main()
{

	setbuf(stdout, NULL);
    int opcion;
    int contadorIDemployee=0;
    int flag= -1;
    eEmployee  arrayEmployee[arrayTam];


    //INICIALIZAR EMPLEADOS
    initEmployees(arrayEmployee,arrayTam);

    do{

        //MUESTRO OPCIONES
        getUnsignedInt(" SELECCIONE OPCION A REALIZAR: \n\n1) Dar de Alta \n2) Modificar \n3) Dar de Baja \n4) Informar \n5) Salir\n","Error, primero cargue datos",1,sizeof(int),1,4,2,&opcion);

        switch(opcion)
        {
            //ALTA
            case 1:
                if(!addEmployee(arrayEmployee,arrayTam,&contadorIDemployee))// SI HAY ESPACIO ENTRA EN LA CONDICION
                    {
                        printf("\n Datos del empleado ingresados\n");
                        flag=0;
                        system("\npause");
                        system("cls");
                    }
                break;
            //MODIFICAR EMPLEADO NOMBRE O APELLIDO
            case 2:
                if(flag==0)
                {
                    employe_modificar(arrayEmployee,arrayTam);
                }
                else
                {
                    printf("\nNo se ha ingresado algun empleado");
                }
            break;
            //DAR DE BAJA UN EMPLEADO
            case 3:
                if(flag==0)
                {
                    removeEmployee(arrayEmployee,arrayTam);
                }
                 else
                {
                    printf("\nNo se ha ingresado algun empleado");
                }
            case 4:
                if(flag==0)
                {
                   informarEmploye(arrayEmployee,arrayTam);
                }
                else
                {
                    printf("\nNo se ha ingresado algun empleado");
                }

            break;
            case 5:
                printf("\nHasta luego.");
            break;

             default:
                printf("\nNo ingreso una opcion correcta");
        		}

        system("pause");
        system("cls");


    }while(opcion!=5);
    return 0;
}
