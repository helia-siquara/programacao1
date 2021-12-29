/*

        Aqui é a biblioteca para o uso das funções relacionada às moedas

*/

#include <stdio.h>

struct TMoeda
{
	enum estado {
	MC,
	BC,
	MBC,
	BELA,
	SOB
	};
	int numRegister;
	int epoca;
    int valor;
	int anoCunho;
	float diametro;
	float peso;
	int aquisicao;
	float valorComercial;
	char tipoMetal[30];
};
	
//Função que implementa um menu no programa

void exibeMenu(){
	printf("\t\t\tMenu\n");
	printf("\t[1] Inserir informa��o das Moedas\n");
	printf("\t[2] Listar todos os Registos de Moedas inseridos\n");
	printf("\t[3] Listar Moedas por Estado de Conserva��o\n");
	printf("\t[4] Remover Moedas por N�mero de Registo\n");
	printf("\t[5] Gravar Registos de Moedas no Ficheiro\n");
	printf("\t[6] Ler registos do Ficheiro\n");
	printf("\t[0] Sair;\n");
	printf("\nQual fun��o deseja executar:");
}

//Função que registra uma moeda no programa

void InsereMoeda(){
	printf("Moeda inserida\n");
}