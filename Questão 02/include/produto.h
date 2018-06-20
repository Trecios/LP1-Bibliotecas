/**
* @file produto.h
* @brief Implementação da classe produto
* @author Trecios
* @since 28/05/2018
* @sa http://www.google.com/
*/
#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <iostream>

namespace produto
{

	class Produto
	{
	public:
		/** @brief Construtor, construtor parametrizado e destrutor */
		Produto();
		Produto(std::string _codigo, std::string _descricao, double _preco);
		virtual ~Produto();
	protected:
		std::string m_cod_barras;
		std::string m_descricao;
		double m_preco;		
	public:
		// getters
		/** @brief Retorna o código de barras do produto */
		std::string getCodBarras();
		/** @brief Retorna a descrição do produto */
		std::string getDescricao();
		/** @brief Retorna o preço do produto */
		double getPreco();
		// setters
		/** @brief Muda o código de barras do produto */
		void setCodBarras(std::string _codigo);
		/** @brief Muda a descrição do produto */
		void setDescricao(std::string _descricao);
		/** @brief Muda o preço do produto */
		void setPreco(double _preco);
		/** @brief Sobrecarga dos operadores */
		double operator+(Produto &P);
		double operator-(Produto &P);
		bool operator==(Produto &P);

	};
}
 
#endif