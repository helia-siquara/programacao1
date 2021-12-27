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

main(){
	setlocale(LC_ALL, "Portuguese");
	exibeMenu();
}
