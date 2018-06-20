#include <iostream>
#include "produto.h"

namespace produto
{

	Produto::Produto() {}

	Produto::~Produto(){}

	Produto::Produto(std::string _codigo, std::string _descricao, double _preco):
		m_cod_barras(_codigo), m_descricao(_descricao), m_preco(_preco) {}

	std::string 
	Produto::getCodBarras() {
		return m_cod_barras;
	}
	
	std::string 
	Produto::getDescricao() {
		return m_descricao;
	}

	double 
	Produto::getPreco() {
		return m_preco;
	}
	
	void 
	Produto::setCodBarras(std::string _codigo) {
		m_cod_barras = _codigo;
	}

	void 
	Produto::setDescricao(std::string _descricao) {
		m_descricao = _descricao;
	}

	void 
	Produto::setPreco(double _preco) {
		m_preco = _preco;
	}
	
	double 
	Produto::operator+(Produto &P)
	{
		m_preco += P.m_preco;
		return m_preco;
	}

	double 
	Produto::operator-(Produto &P)
	{
		m_preco -= P.m_preco;
		return m_preco;
	}

	bool 
	Produto::operator==(Produto &P)
	{
		bool igual = (m_cod_barras == P.m_cod_barras);
		return igual;
	}
}