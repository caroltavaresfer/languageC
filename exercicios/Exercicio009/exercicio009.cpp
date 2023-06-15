/* Exercicio 009 - Escreva um programa que calcule e apresente o valor do volume de uma lata de azeite de forma cilindrica.
O programa deve utilizar a foruma: volume=3.14159*raio²*altura.
Obs.: Pensando na lógica do programa:
1- O que temos que ler?
2- O que temos que calcular?
3- O que temos que apresentar?*/

#include <stdio.h>
#include <math.h>

int main()
{
	float raio, altura, volume;

	printf("Digite o raio da lata: \n");
	scanf_s("%f", &raio);
	printf("Digite a altura da lata: \n");
	scanf_s("%f", &altura);
	volume = 3.14159 * pow(raio, 2) * altura;
	printf("O volume da lata eh: %f", volume);
	return 0;
}
