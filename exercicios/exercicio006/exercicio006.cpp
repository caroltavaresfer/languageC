/* Exercicio006 - Escreva um programa que armazene as 3 notas escolares de um aluno. Calcule a média do aluno e armazene em uma variavel.
Apresentar a média do aluno.
Obs.: Usar variáveis do tipo de dados: float, pois elas são do tipo que armazenam casas decimais.*/

#include <stdio.h>

int main()
{
	float nota1=5, nota2=3, nota3=4.5, media;
	media = (nota1 + nota2 + nota3) / 3;
	printf("A media do aluno eh: %.2f \n", media);
	return 0;
}

