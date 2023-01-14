#include "Vector3D.h"
#include <iostream>
#include <math.h>
//===================
Vector3D::Vector3D()
:a_component(0.0), b_component(0.0), c_component(0.0), Vector_startingPoint_X(0.0), Vector_startingPoint_Y(0.0),
 Vector_startingPoint_Z(0.0), Vector_terminal_point_X(0.0), Vector_terminal_point_Y(0.0), Vector_terminal_point_Z(0.0),
 Vector_magnitude(0.0), Vector3D_option(0)
{	}
//===================
void Vector3D::print_Vector3D_options()
{
	std::cout<<"\tWELCOME TO THE VECTOR 3D LIBRARY"<<'\n'
			 <<"[1] FIND TERMIMAL POINT OF VECTOR"<<'\n'
			 <<"[2] FIND MAGNITUDE OF VECTOR"<<std::endl;
	std::cin>>Vector3D_option;
}
//===================
void Vector3D::calculate_Vector3D_endPoints()
{
	std::cout<<"Enter starting point coordinates:"<<'\n';
	std::cin>>Vector_startingPoint_X>>comma_symbol>>Vector_startingPoint_Y>>comma_symbol>>Vector_startingPoint_Z;

	std::cout<<"<a,b,c>"<<'\n';

	std::cout<<"Enter vector in component form"<<std::endl;
	std::cin>>left_vector_component_symbol>>a_component>>comma_symbol>>b_component>>comma_symbol>>c_component>>right_vector_component_symbol;

	if(left_vector_component_symbol=='<' && right_vector_component_symbol=='>')
	{
		Vector_terminal_point_X = a_component + (-1*(-1*Vector_startingPoint_X));
		Vector_terminal_point_Y = b_component + (-1*(-1*Vector_startingPoint_Y));
		Vector_terminal_point_Z = c_component + (-1*(-1*Vector_startingPoint_Z));
		std::cout<<"x= "<<Vector_terminal_point_X
			 	 <<"\ty= "<<Vector_terminal_point_Y
			 	 <<"\tz= "<<Vector_terminal_point_Z<<std::endl;
	}
	else
	{
		std::cerr<<"FUNCTION ERROR: INVALID DATA WAS ENTERED"<<std::endl;
		return;
	}
}
//===================
void Vector3D::calculate_VectorMagnitude()
{
	std::cout<<"<a,b,c>"<<'\n';

	std::cout<<"Enter vector in component form"<<'\n';
	std::cin>>left_vector_component_symbol>>a_component>>comma_symbol>>b_component>>comma_symbol>>c_component>>right_vector_component_symbol;

	if(left_vector_component_symbol=='<' && right_vector_component_symbol=='>')
	{
		Vector_magnitude = sqrt((pow((a_component),2) + pow((b_component),2) + pow((c_component),2)));
		std::cout<<"||v|| = "<<Vector_magnitude<<std::endl;
	}
	else
	{
		std::cerr<<"FUNCTIN ERROR: INVALID DATA WAS ENTERED"<<std::endl;
		return;
	}
}
//===================
void Vector3D::Vector3D_result()
{
	switch(Vector3D_option)
	{
		case 1:
		{
			calculate_Vector3D_endPoints();
			Vector3D::~Vector3D();
			break;
		}
		case 2:
		{
			calculate_VectorMagnitude();
			Vector3D::~Vector3D();
			break;
		}
		default: {std::cerr<<"VECTOR 3D ERROR: YOU ENTER INVALID DATA"<<std::endl; break;}
	}
}
//===================
Vector3D::~Vector3D()
{	}
