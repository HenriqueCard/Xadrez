#include <stdio.h>//
#include <stdlib.h>//bibliotecas

int main()//fun��o principal
{
	int tabuleiro[8][8];//declara��o da matriz
	int i=0, j=0;//
	int pe=0, ca=0, to=0, bi=0, re=0, ra=0, au=0;//declara��o das vari�veis

	printf("Escolha uma peca :\n");//sugere ao usu�rio a escolha de uma pe�a 
	printf("1- peoes\n");//imprime as op��es na tela
	printf("2-cavalos\n");
	printf("3-torres\n");
	printf("4-bispos\n");
	printf("5-reis\n");
	printf("6-rainhas\n");
	printf("0-ausencia de pecas\n");
	for (i = 0;i < 8;i++)//la�o de repeti��o
	{
		for (j = 0;j < 8;j++) {
			printf("Escolha uma peca entre 0 e 6: [%d][%d]:\n", i, j);//preenchimento da matriz
			scanf_s("%d", &tabuleiro[i][j]);//Faz leitura do que foi digitado
			if (tabuleiro[i][j] == 1)//condi��o
			{
				pe++;//vari�vel contadora
			}
			else if (tabuleiro[i][j] == 2)//condi��o
			{
				ca++;//vari�vel contadora
			}
			else if (tabuleiro[i][j] == 3)//condi��o
			{
				to++;//vari�vel contadora
			}
			else if (tabuleiro[i][j] == 4)//condi��o
			{
				bi++;//vari�vel contadora
			}
			else if (tabuleiro[i][j] == 5)//condi��o
			{
				re++;//vari�vel contadora
			}
			else if (tabuleiro[i][j] == 6)//condi��o
			{
				ra++;//vari�vel contadora
			}
			else if (tabuleiro[i][j] == 0)//condi��o
			{
				au++;//vari�vel contadora
			}
		}
	}
	printf("Tabuleiro:\n");//impress�o na tela
	for (i = 0;i < 8;i++)//la�o de repeti��o
	{
		for (j = 0;j < 8;j++) 
			printf("%d\t", tabuleiro[i][j]);//imprime a matriz
		printf("\n\n");	//espa�o
	}
	printf("\n");//espa�o
	printf("QUANTIDADES DE CADA TIPO DE PECAS ESCOLHIDAS:\n ");//impress�o na tela
	printf("peoes.....%d\n", pe);//impress�o da quantidade de pe�as escolhidas
	printf("cavalos...%d\n", ca);
	printf("torres....%d\n", to);
	printf("bispos....%d\n", bi);
	printf("reis......%d\n", re);
	printf("rainhas...%d\n", ra);
	printf("ausencia..%d\n", au);
	printf("\n");//espa�o
	system("pause");//pausa a tela
	return 0;
}