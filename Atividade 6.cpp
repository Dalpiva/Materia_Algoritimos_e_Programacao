#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	char repetir;
	
	do															// La�o de repeti��o de programa
	{
		do														// La�o de garantia de par�metros
		{
			printf("\nDigite um n�mero inteiro positivo: ");
			scanf("%d", &numero);
			
			if(numero <= 0)
			{
				printf("N�mero Inv�lido!");
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
		
		printf("\nDeseja digitar outro n�mero? <S ou N>:");
		scanf(" %c", &repetir);
		
	}while(repetir != 'N');
}
