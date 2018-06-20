#include <iostream>
#include <MathBasic.h>

using namespace std;
using namespace mbasic;

/**
 *@file main.cpp
 *@brief Implementação de bibliotecas estáticas e dinâmicas
 *@author Ailton Gabriel Figueira Dantas Ramos da Silva
 *@author Felipe Douglas Cavalcante Marinho de Vasconcelos
 *@since 14/06/2018
 *@date 18/06/2018
*/

int main()
{
	int n1 = 5;
	int n2 = 10;
	cout << MathBasic::Add(n1, n2) << endl;
	cout << MathBasic::Dif(n1, n2) << endl;
	cout << MathBasic::Mux(n1, n2) << endl;
	cout << MathBasic::Div(n1, n2) << endl;

	return 0;
}