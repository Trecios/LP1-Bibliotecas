#ifndef MATHBASIC_H
#define MATHBASIC_H


/**
 *@brief Criação de um namespace o qual utiliza de uma classe com métodos estáticos
 */
namespace mbasic
{
	class MathBasic
	{
	public:
		/**@brief Método estático de adição que retorna a soma de dois inteiros*/
		static int Add(int n1, int n2);
		/**@brief Método estático de subtração que retorna a diferença entre dois inteiros*/
		static int Dif(int n1, int n2);
		/**@brief Método estático de multiplicação que retorna o produto entre dois inteiros*/
		static int Mux(int n1, int n2);
		/**@brief Método estático de divisão que retorna uma divisão inteira entre dois inteiros*/
		static int Div(int n1, int n2);
	};
}

#endif