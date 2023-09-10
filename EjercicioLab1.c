#include <stdio.h>
#include <stdlib.h>
#define  ERR  500	

int RestaSucesiva (int a, int b);
int SumaSucesiva (int a, int b);
int menu ();

int main ()
{
	system("cls");
	
	int divisor, dividendo;
	
	printf("Ingresa el dividendo: ");
	scanf("%d", &dividendo);
	printf("Ingresa el divisor diferente a 0: ");
	scanf("%d", &divisor);
	
	RestaSucesiva(divisor, dividendo);
	
	return 0;
}

int menu ()
{
	int opc;
	
	do
	{
	printf("1. Divisi%cn por Restas Sucesivas.\n", 162);
	printf("2. Multiplicaci%on por Sumas Sucesivas.", 162);
	printf("3. Factorial de un n%cmero.\n", 163);
	printf("4. Salir.\n");
	
	scanf("%d", &opc);
	}
	while(opc=!4);
	
	
}

int RestaSucesiva (int divisor, int dividendo)
{
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

int SumaSucesiva (int factor1, int factor2)
{
	
}