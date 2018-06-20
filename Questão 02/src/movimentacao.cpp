#include "movimentacao.h"

namespace movimento
{

	Movimentacao::Movimentacao()
	{
		m_discription = "";
		m_value = 0;
		m_indication = 0;
	}

	Movimentacao::Movimentacao(string discription_, double value_, int indication_)
	{
		m_discription = discription_;
		m_value = value_;
		m_indication = indication_;
	}

	Movimentacao::~Movimentacao(){}

	string 
	Movimentacao::getDiscription()
	{
		return m_discription;
	}

	double
	Movimentacao::getValue()
	{
		return m_value;
	}

	int
	Movimentacao::getIndication()
	{
		return m_indication;
	}

	ostream& operator<<(ostream &o, Movimentacao const m)
	{
		o << "Descrição: " << m.m_discription << " " << "Valor: R$" << m.m_value << " " << "Indicação (0 para crédito e 1 para débito): " << m.m_indication << endl;

		return o;
	}

}