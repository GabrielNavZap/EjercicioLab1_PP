#ifndef    _EJERCICIOLAB1_H
#define    _EJERCICIOLAB1_H

#include <stdio.h>
#include <stdlib.h>

/*Definir codigo de error "division por cero"*/
#define  ERR  500

                    /*************************
                     *Prototipos de Funciones*
                     *************************/
					
int RestaSucesiva ();
int SumaSucesiva ();
int Factorial ();
int menu ();


                       /***********
                        *Funciones*
                        ***********/


/*Funcion Menu*/
int menu ()
{
	int opc;
	
	do
	{
		printf("1. Divisi%cn por Restas Sucesivas.\n", 162);
		printf("2. Multiplicaci%con por Sumas Sucesivas.\n", 162);
		printf("3. Factorial de un n%cmero.\n\n", 163);
		printf("4. Salir.\n\n");
		
		printf("Elije una opci%cn: ", 162);
		scanf("%d", &opc);
		
		switch (opc)
		{
			case 1: 
			{
				RestaSucesiva();
				break;
			}
			
			case 2:
			{
				SumaSucesiva();
				break;
			}
			
			case 3:
			{
				Factorial();
				break;
			}
			
			case 4:
			{
				printf("Adi%cs", 162);
				break;
			}
			
			default:
			{
				printf("Opci%cn Inv%clida", 162, 160);
				break;
			}
		}
	}
	while(opc=!4);
	return 0;
}


/*Funcion Division con Restas Sucesivas*/
int RestaSucesiva ()
{
	int divisor, dividendo;
	
	printf("Ingresa el dividendo: ");
	scanf("%d", &dividendo);
	printf("Ingresa el divisor diferente a 0: ");
	scanf("%d", &divisor);
	
	int cociente = 0, residuo = dividendo;
	
	if (divisor == 0)
	{
		printf("\nError, no se puede dividir por cero\n");
		return ERR;
	}
	
	
	printf("\n\n%d dividido por %d ", dividendo, divisor);
	
	
	while (divisor<=dividendo)
	{
	  dividendo-=divisor;
	  cociente++;
	}
	residuo = dividendo;
	
	printf("nos da un cociente de %d y un residuo de %d\n", cociente, residuo);
	
	return 0;
}


/*Funcion de Multiplicacion con Sumas Sucesivas*/
int SumaSucesiva ()
{
	int suma = 0, factor1, factor2;
	
	printf("Ingrese el primer factor: ");
	scanf("%d", &factor1);
	printf("Ingrese el segundo factor: ");
	scanf("%d", &factor2);
	
	printf("%d multiplicado por %d ", factor1, factor2);
	
	if(factor1==0||factor2==0)
	{
		printf("da como resultado 0.\n");
		return 0;
	}
	
	while (factor2>0)
	{
		suma+=factor1;
		factor2--;
	}
	
	printf("da como resultado %d", suma);
	
	return 0;
}


/*Funcion Factorial de un Numero*/
int Factorial ()
{
	int num;
	long int fact = 1;
	printf("Ingresa el entero positivo del que deseas calcular el factorial: ");
	scanf("%d", &num);
	
	if (num<0)
	{
		printf("El entero debe ser positivo.\n");
		return 0;
	}
	
	printf("El factorial de %d es: ", num);
	
	while (num>0)
	{
		fact = fact*num--;
	}
	
	printf("%d.\n", fact);
	
	return 0;
}

#endif