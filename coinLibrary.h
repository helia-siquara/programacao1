/*

        Aqui é a biblioteca para o uso das funções relacionada às moedas

*/

#include <stdio.h>

struct data_aquisicao
{
  int dia;
  int mes;
  int ano;

};

struct TMoeda
{
	enum tp_estado {
	MC,
	BC,
	MBC,
	BELA,
	SOB
	}estado;

	int numRegister;
	int epoca;
  float valor;
	int anoCunho;
	float diametro;
	float peso;
	float valorComercial;
	char tipoMetal[30];

  struct data_aquisicao aquisicao;
};cad_moedas[TMAX];
	
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

void InsereMoeda(int v[]){

  int i;
  struct TMoeda Moedas[TMAX];

  for(i =0; i<= TMAX; i++){

    printf("Numero de Registo:");
    scanf("%d", &Moedas[i].numRegister);

    printf("Época:");
    scanf("%d", &Moedas[i].epoca);

    printf("Valor:");
    scanf("%f", &Moedas[i].valor);

    printf("Ano de Cunho:");
    scanf("%d", &Moedas[i].anoCunho);

    printf("Diâmetro:");
    scanf("%f", &Moedas[i].diametro);

    printf("Peso:");
    scanf("%f", &Moedas[i].peso);

    printf("Data de Aquisição:");
    scanf("%d/%d/%d", &Moedas[i].aquisicao.dia,&Moedas[i].aquisicao.mes,&Moedas[i].aquisicao.ano);

    printf("Valor comercial:");
    scanf("%f", &Moedas[i].valorComercial);

    printf("Metal:");
    gets(Moedas[i].tipoMetal);

    printf("Estado de Conservação:");
    gets(&Moedas[i].estado);
  }
}
