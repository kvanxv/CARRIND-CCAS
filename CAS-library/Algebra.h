#pragma once
//==========
#include "CAS.h"
//==========
class Algebra : public CAS
{
public:
	Algebra();
	~Algebra();
	void print_Algebra_options();
	void polyRoots();
	void Algebra_result();
private:
	double a_constant;
	double b_constant;
	double c_constant;
	double quadratic_formula_postive;
	double quadratic_formula_negative;
	int Algebra_option;
};

