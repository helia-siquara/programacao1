#include <stdio.h>
#include <string.h>
#include <locale.h>

void exibeMenu(){
	printf("\t\t\tMenu\n");
	printf("\t[1] Inserir informação das Moedas\n");
	printf("\t[2] Listar todos os Registos de Moedas inseridos\n");
	printf("\t[3] Listar Moedas por Estado de Conservação\n");
	printf("\t[4] Remover Moedas por Número de Registo\n");
	printf("\t[5] Gravar Registos de Moedas no Ficheiro\n");
	printf("\t[6] Ler registos do Ficheiro\n");
	printf("\t[0] Sair;\n");
	printf("\nQual função deseja executar:");
}

void InsereMoeda(){
	
}
// começando já a fazer as funções para dps separar tudo mas com o tempo a gente faz isso
void main(){

	int op;
	setlocale(LC_ALL, "Portuguese");


// Eu não sei se é melhor pra usar switch ou se vários ifs fica mais visualmente bonito
	while(1){
		exibeMenu();
		scanf("%d", &op);
		switch (op)
		{
		case 0:
			break;
		case 1:
			InsereMoeda();
			break;
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
			printf("Selção inválida");
			break;
		}
	}
}
