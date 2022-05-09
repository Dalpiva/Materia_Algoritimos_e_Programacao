#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char saude;
	char dor;
	float temperatura;
	
	printf("O paciente está se sentindo bem?\nResponda com S para SIM ou N para NÃO:");	
	scanf(" %c", &saude);
	
	if(saude == 'N')
	{
		printf("\nEle está sentindo dor?Responda com S para SIM ou N para NÃO:");
		scanf(" %c", &dor);
		
		if(dor == 'N')
		{
			printf("\nQual a temperatura do paciente?");
			scanf("%f", &temperatura);
			
			if(temperatura <= 37)
			{
				printf("\nO paciente não tem febre!");
			}else{
				printf("\nO paciente está febril.");
			}
		}else{
			printf("\nUm medicamento pode ser aplicado");
		}
		
	}else{
		printf("\nQue Bom que você está saudavel!");
	}
	
	return (0);
}
