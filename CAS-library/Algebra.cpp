#include "Algebra.h"
#include <iostream>
#include <math.h>
//=======================
Algebra::Algebra()
:a_constant(0.0), b_constant(0.0), c_constant(0.0), quadratic_formula_postive(0.0),
 quadratic_formula_negative(0.0), Algebra_option(0)
{	}
//================
void Algebra::print_Algebra_options()
{
	std::cout<<"\tWELCOME TO THE ALGEBRA LIBRARY"<<'\n'
			 <<"[1] QUADRATIC FORMULA"<<std::endl;
	std::cin>>Algebra_option;
}
//================
void Algebra::polyRoots()
{
	std::cout<<"(aX^2) + (bX) + (c)"<<std::endl;

	std::cout<<"Enter a:"<<'\n';
	std::cin>>a_constant;

	std::cout<<"Enter b:"<<'\n';
	std::cin>>b_constant;

	std::cout<<"Enter c:"<<std::endl;
	std::cin>>c_constant;

	quadratic_formula_postive = ((-1*(b_constant))+ (sqrt(pow((b_constant), 2) - (4 * a_constant * c_constant)))) / (2*a_constant);
	quadratic_formula_negative = ((-1*(b_constant)) + (-1 * sqrt(pow((b_constant), 2) - (4 * a_constant * c_constant)))) / (2*a_constant);

	std::cout<<"x = "<<quadratic_formula_postive<<'\n';
	std::cout<<"x = "<<quadratic_formula_negative<<std::endl;

}
//=================
void Algebra::Algebra_result()
{
	switch(Algebra_option)
	{
		case 1:
		{
			polyRoots();
			Algebra::~Algebra();
			break;
		}
		default: {std::cerr<<"ALGEBRA ERROR: YOU ENTERED INVALID DATA"<<std::endl; break;}
	}
}
//=================
Algebra::~Algebra()
{	}
