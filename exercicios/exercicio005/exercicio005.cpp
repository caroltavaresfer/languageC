/* exercicio005.cpp : Escreva um programa que declare variaveis.Estas variaveis irão armazenar :
*  => A quilometragem inicial de um carro: 200.000
* e depois de uma viagem:
* => A quilometragem final do carro: 207349.
* 
* O programa deverá atribuir a estes valores a variaveis e depois calcular a distancia percorrida do carro (diferença entre quilometragem inicial da quilometragem final).
* 
* obs.: Este resultado deverá ser armazenado em uma variavel, para que seja apresentada.
*/


#include <iostream>
#include <stdio.h>

int main()
{
	int kmInicial = 200000; 
	int kmFinal = 207349;
	int resultado;

	resultado = kmFinal - kmInicial;
	printf("A distancia percorrida na viagem foi de: %dKM\n", resultado);
	return 0;
}

