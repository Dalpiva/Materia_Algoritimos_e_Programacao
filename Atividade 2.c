#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char saude;
	char dor;
	float temperatura;
	
	printf("O paciente est� se sentindo bem?\nResponda com S para SIM ou N para N�O:");	
	scanf(" %c", &saude);
	
	if(saude == 'N')
	{
		printf("\nEle est� sentindo dor?Responda com S para SIM ou N para N�O:");
		scanf(" %c", &dor);
		
		if(dor == 'N')
		{
			printf("\nQual a temperatura do paciente?");
			scanf("%f", &temperatura);
			
			if(temperatura <= 37)
			{
				printf("\nO paciente n�o tem febre!");
			}else{
				printf("\nO paciente est� febril.");
			}
		}else{
			printf("\nUm medicamento pode ser aplicado");
		}
		
	}else{
		printf("\nQue Bom que voc� est� saudavel!");
	}
	
	return (0);
}
