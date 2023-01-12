#include "CAS.h"
#include "Electric.h"
#include "Vector2D.h"
#include "Algebra.h"
#include <iostream>
//=========================
CAS::CAS()
: radian_mode(false), degree_mode(true), comma_symbol(','), i_symbol('i'), j_symbol('j'), CAS_user_option(-1)
{	}
//=========================
void CAS::print_CCAS_option()
{
	std::cout<<"\tWELCOME TO THE CARRIND COMPUTER ALGEBRA SYSTEM"<<std::endl;
	std::cout<<"* WHICH SYSTEM WOULD YOU LIKE TO ENTER?"<<'\n'
			 <<"[0] CHANGE ANGLE MODE"<<'\n'
			 <<"[1] ELECTRIC"<<'\n'
			 <<"[2] VECTOR2D"<<'\n'
			 <<"[3] ALGEBRA"<<std::endl;
	std::cin>>CAS_user_option;
}
//=========================
void CAS::change_angle_mode()
{
	int option_changeMode {0};
	std::cout<<"Radian:"<<radian_mode<<'\n';
	std::cout<<"Degree:"<<degree_mode<<'\n';
	std::cout<<"Do you want to change mode?"<<'\n';	

	std::cout<<"[1] Yes"<<'\n'<<"[2] No"<<std::endl;
	std::cin>>option_changeMode;

	if(option_changeMode==1 && degree_mode==true)
	{
		degree_mode = false;
		radian_mode = true;
	}
	else if(option_changeMode==2 && degree_mode==true)
	{
		degree_mode=true;
		radian_mode=false;
	}
	else if(option_changeMode==1 && degree_mode==false)
	{
		degree_mode = true;
		radian_mode = false;
	}
	else if(option_changeMode==2 && radian_mode==true)
	{
		degree_mode=false;
		radian_mode=true;
	}
}
//=========================
void CAS::result()
{
	switch(CAS_user_option)
	{
		case 0:
		{
			CAS::change_angle_mode();
			break;
		}
		case 1:
		{
			Electric Electric_app;
			Electric_app.print_Electric_options();
			Electric_app.Electric_result();
			break;
		}
		case 2:
		{
			Vector2D Vector2D_app;
			Vector2D_app.print_Vector2D_options();
			Vector2D_app.Vector2D_result();
            break;

		}
		case 3:
		{
			Algebra Algebra_app;
			Algebra_app.print_Algebra_options();
			Algebra_app.Algebra_result();
			break;
		}
		default:
        {
            std::cerr<<"SYSTEM ERROR: YOU ENTERED INVALID DATA"<<std::endl;
            break;
        }
	}
}
//====================
CAS::~CAS()
{	}
