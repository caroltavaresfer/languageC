/* Exercicio 007- Escreva um programa que calcule e apresente o valor do volume de uma lata de azeite de forma cilindrica.
* O programa deve utilizar a foruma: volume = 3.14159*raio²*altura
* Obs.:atribua valores para as variaveis raio e altura
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float raio = 3, altura = 5, volume;
	volume = 3.14159 * pow(raio, 2) * altura;
	printf("Raio= %f \n", raio);
	printf("Altura = %f \n", altura);
	printf("O Volume da lata de azeite eh: %.2f \n", volume);
	return 0;
}