#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	char repetir;
	
	do															// Laço de repetição de programa
	{
		do														// Laço de garantia de parâmetros
		{
			printf("\nDigite um número inteiro positivo: ");
			scanf("%d", &numero);
			
			if(numero <= 0)
			{
				printf("Número Inválido!");
			}
		}while(numero <= 0);
		
		for(int indice = 1; indice <= numero; indice++)
		{
			for(int index = 1; index <= indice; index++)
			{
				printf("%d ", indice);
			}
			printf("\n");
		}
		
		printf("\nDeseja digitar outro número? <S ou N>:");
		scanf(" %c", &repetir);
		
	}while(repetir != 'N');
}
