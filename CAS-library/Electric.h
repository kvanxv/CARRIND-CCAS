#pragma once
#include "CAS.h"
//===========
class Electric : public CAS
{
public:
	Electric();
	~Electric();
	void print_Electric_options();
	void Electric_result();

	void calculate_electric_force();
private:
	double Coulomb_force;
	double object_electric_charge_1;
	double object_electric_charge_2;
	double displacementVector_between_charges;
	int Electric_option;
};
