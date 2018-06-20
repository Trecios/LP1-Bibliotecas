#include <iostream>
#include "MathBasic.h"

namespace mbasic
{
	int 
	MathBasic::Add(int n1, int n2)
	{
		return n1 + n2;
	}

	int 
	MathBasic::Dif(int n1, int n2)
	{
		return n1 - n2;
	}

	int 
	MathBasic::Mux(int n1, int n2)
	{
		return n1 * n2;
	}

	int 
	MathBasic::Div(int n1, int n2)
	{
		if(n2 == 0)
		{
			std::cout << "0 é inválido como denominador..." << std::endl;
			return 0;
		}
		return n1 / n2;
	}
}