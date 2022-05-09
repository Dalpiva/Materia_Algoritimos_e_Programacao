#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int limite_inferior = 0, limite_superior, numeros_por_linha;
	char repeticao;
	int contador, numerador, descarte;
	
	do
	{
		do
		{
			printf("\nInfore o valor do limite inferior do intervalo: ");
			scanf("%d", &limite_inferior);	
			
			if(limite_inferior < 1)
			{
				printf("\nLimite inválido, digite novamente:");
			}
		}while(limite_inferior < 1);
			
		do
		{	
			printf("\nInfore o valor do simite superior do intervalo: ");
			scanf("%d", &limite_superior);
			
			if(limite_superior <= limite_inferior)
			{
				printf("\nLimite inválido, digite novamente:");	
			}
		}while(limite_superior <= limite_inferior);
		
		do
		{	
		printf("\nInforme quantos números deseja imprimir por linha: ");
		scanf("%d", &numeros_por_linha);
		}while(numeros_por_linha < 1);
		
		numerador = limite_inferior;
		
		while(numerador < limite_superior)
		{			
			if(numerador == 2 || numerador == 3 || numerador == 5 || numerador == 7)
			{
				printf("%d ", numerador);
				contador++;				
			}
			descarte = numerador % 2;
			
			if(descarte != 0)
			{
				descarte = numerador % 3;
			
				if(descarte != 0)
				{
					descarte = numerador % 5;
			
					if(descarte != 0)
					{
						descarte = numerador % 7;
			
						if(descarte != 0)
						{
							printf("%d ",numerador);
							
							contador++;
							if(numeros_por_linha <= contador)
							{
								printf("\n");
								contador = 0;
							}
						}	
					}	
				}	
			}
			
										
			numerador++;
		}
		
		printf("\nDeseja repetir o programa? <S ou N> ");
		scanf(" %c", &repeticao);
					
	}while(repeticao == 'S');
}
