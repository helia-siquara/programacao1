#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "coinLibrary.h"

#define TMAX_REGISTOS 30

void main(){
	TMoeda Moedas[TMAX_REGISTOS];
	int op=1;
	setlocale(LC_ALL, "Portuguese");

// Eu não sei se é melhor pra usar switch ou se vários ifs fica mais visualmente bonito

	while(op != 0){
		exibeMenu();
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			
			system("cls");
			InsereMoeda();
			return printf("Moeda inserida com sucesso!\n");
			
		case 2:
			
			/* code */
			break;
		
		case 3:
		
			/* code */
			break;
		
		case 4:
		
			/* code */
			break;
		
		case 5:
		
			/* code */
			break;
		
		case 6:
		
			/* code */
			break;
		
		case 7:
		
			/* code */
			break;
		
		default:
			system("cls");
			printf("Seleçãoo inv�lida");
			break;
		}
	}
}
