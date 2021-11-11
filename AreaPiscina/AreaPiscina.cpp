#include <stdio.h>
#include <stdlib.h>
#include<string.h>
main ()
{ 
	struct area
	{
		float area_piscina; 
	};
	area registro[5];
	int i, quant_ladrilho;
	float largura, altura, lado, area_ladrilho;
	float soma_lados_piscina;
	for (i = 1; i < 6; i++)
	{
		printf ("\nDigite a altura do lado da piscina: ");
		scanf ("%f", &altura);
	
		printf ("Digite a largura do lado da piscina: ");
		scanf ("%f", &largura);
		
		registro[i].area_piscina = altura*largura;
		
		printf ("\nArea da piscina %d: %0.1f\n", i, registro[i].area_piscina);	
	}
	
	printf ("Lado do ladrilho: ");
	scanf ("%f", &lado);
	
	area_ladrilho = lado*lado;
	
	printf ("\nArea do ladrilho: %0.1f", area_ladrilho);
	
	soma_lados_piscina = registro[1].area_piscina + registro[2].area_piscina + registro[3].area_piscina + registro[4].area_piscina + registro[5].area_piscina;
	
	printf ("\nSoma dos lados da piscina: %0.1f", soma_lados_piscina);
	
	quant_ladrilho = soma_lados_piscina/area_ladrilho;
	
	printf ("\nQuantidade de ladrilhos: %d", quant_ladrilho);
	
	
	
}
