#include <iostream>
#include <memory>
#include <vector>
#include "produto.h"
#include "movimentacao.h"

/**
 *@file main.cpp
 *@brief Programa para resolver a questão 2 do Laboratório 6 de LP1
 *@author Ailton Gabriel Figueira Dantas Ramos da Silva
 *@author Felipe Douglas Cavalcante Marinho de Vasconcelos
 *@since 14/05/2018
 *@date 19/05/2018
*/

using namespace std;
using namespace produto;
using namespace movimento;

int main(int argc, char const *argv[])
{
	Produto fruta("001", "Maça", 1.35);
	Produto cerveja("002", "Cerveja Schin", 2.50);
	Movimentacao compra("Compras no mercadinho", fruta+cerveja, 0);
	cout << compra;
}