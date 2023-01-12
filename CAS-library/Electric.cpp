#include "Electric.h"
#include "CAS.h"

#include <iostream> 
#include <math.h>
//====================
Electric::Electric()
:Coulomb_force(0.0), object_electric_charge_1(0.0), object_electric_charge_2(0.0),
 displacementVector_between_charges(0.0), Electric_option(0)
{	}
//===================
Electric::~Electric()
=default;
//==================
void Electric::print_Electric_options()
{
	std::cout<<"\tWELCOME TO THE ELECTRIC LIBRARY"<<std::endl;
	std::cout<<"* PICK AN OPTION:"<<'\n'
			 <<"[1] SOLVE COULOMB FORCE"<<std::endl;
	std::cin>>Electric_option;
}
//=====================
void Electric::calculate_electric_force()
{
	std::cout<<"Enter electric charge of first particle:"<<'\n';
	std::cin>>object_electric_charge_1;
	std::cout<<"Enter electric charge of second particle:"<<'\n';
	std::cin>>object_electric_charge_2;
	std::cout<<"Enter distance betweem them:"<<std::endl;
	std::cin>>displacementVector_between_charges;
	
	Coulomb_force = (Colombs_constant) * ((object_electric_charge_1 * object_electric_charge_2)/(pow((displacementVector_between_charges), 2)));
	std::cout<<"Coulomb force: "<<Coulomb_force<<std::endl;
}
//=====================
void Electric::Electric_result()
{
	switch(Electric_option)
	{
		case 1:
		{
			calculate_electric_force();
			break;
		}
		default: {std::cerr<<"ELECTRIC ERROR: YOU ENTERED INVALID DATA"<<std::endl;}
	}
}

