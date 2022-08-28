#include <stdio.h>//
#include <stdlib.h>//bibliotecas

int main()//função principal
{
	int tabuleiro[8][8];//declaração da matriz
	int i=0, j=0;//
	int pe=0, ca=0, to=0, bi=0, re=0, ra=0, au=0;//declaração das variáveis

	printf("Escolha uma peca :\n");//sugere ao usuário a escolha de uma peça 
	printf("1- peoes\n");//imprime as opções na tela
	printf("2-cavalos\n");
	printf("3-torres\n");
	printf("4-bispos\n");
	printf("5-reis\n");
	printf("6-rainhas\n");
	printf("0-ausencia de pecas\n");
	for (i = 0;i < 8;i++)//laço de repetição
	{
		for (j = 0;j < 8;j++) {
			printf("Escolha uma peca entre 0 e 6: [%d][%d]:\n", i, j);//preenchimento da matriz
			scanf_s("%d", &tabuleiro[i][j]);//Faz leitura do que foi digitado
			if (tabuleiro[i][j] == 1)//condição
			{
				pe++;//variável contadora
			}
			else if (tabuleiro[i][j] == 2)//condição
			{
				ca++;//variável contadora
			}
			else if (tabuleiro[i][j] == 3)//condição
			{
				to++;//variável contadora
			}
			else if (tabuleiro[i][j] == 4)//condição
			{
				bi++;//variável contadora
			}
			else if (tabuleiro[i][j] == 5)//condição
			{
				re++;//variável contadora
			}
			else if (tabuleiro[i][j] == 6)//condição
			{
				ra++;//variável contadora
			}
			else if (tabuleiro[i][j] == 0)//condição
			{
				au++;//variável contadora
			}
		}
	}
	printf("Tabuleiro:\n");//impressão na tela
	for (i = 0;i < 8;i++)//laço de repetição
	{
		for (j = 0;j < 8;j++) 
			printf("%d\t", tabuleiro[i][j]);//imprime a matriz
		printf("\n\n");	//espaço
	}
	printf("\n");//espaço
	printf("QUANTIDADES DE CADA TIPO DE PECAS ESCOLHIDAS:\n ");//impressão na tela
	printf("peoes.....%d\n", pe);//impressão da quantidade de peças escolhidas
	printf("cavalos...%d\n", ca);
	printf("torres....%d\n", to);
	printf("bispos....%d\n", bi);
	printf("reis......%d\n", re);
	printf("rainhas...%d\n", ra);
	printf("ausencia..%d\n", au);
	printf("\n");//espaço
	system("pause");//pausa a tela
	return 0;
}