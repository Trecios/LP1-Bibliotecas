#include <iostream>
#include <memory>
#include <vector>
#include "produto.h"
#include "movimentacao.h"

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