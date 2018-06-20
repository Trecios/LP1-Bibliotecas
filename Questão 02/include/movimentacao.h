#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H
#include <iostream>
#include <string>
using namespace std;

namespace movimento
{

	class Movimentacao
	{
	private:
		string m_discription;
		double m_value;
		int m_indication;
	public:
		Movimentacao();
		Movimentacao(string discription_, double value_, int indication_);
		~Movimentacao();

		//getters

		string getDiscription();
		double getValue();
		int getIndication();

		friend ostream& operator<<(ostream &o, Movimentacao const m);

	};
}

#endif