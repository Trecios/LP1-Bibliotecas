#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H
#include <iostream>
#include <string>
using namespace std;

namespace movimento

/**@brief Interfaçe da classe Movimentacao*/

{

	class Movimentacao
	{
	private:
		/**@brief Variável que armazena descrição da movimentação*/
		string m_discription;
		/**@brief Variável que armazena o valor da movimentação*/
		double m_value;
		/**@brief Variável que armazena a indicação da movimentação*/
		int m_indication;
	public:
	/**@brief Construtor padrão*/
		Movimentacao();
	/**@brief Construtor parametrizado*/
		Movimentacao(string discription_, double value_, int indication_);
	/**@brief Destrutor padrão*/
		~Movimentacao();

		//getters
	/**@brief Método que retorna a descrição*/
		string getDiscription();
	/**@brief Método que retorna o Valor*/
		double getValue();
	/**@brief Método que retorna a indição*/
		int getIndication();

	/**@brief Sobrecarga do operador de inserção*/
		friend ostream& operator<<(ostream &o, Movimentacao const m);

	};
}

#endif