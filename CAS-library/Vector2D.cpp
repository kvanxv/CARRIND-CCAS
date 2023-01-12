#include "CAS.h"
#include "Vector2D.h"
#include <iostream>
//==================
Vector2D::Vector2D()
:displacement_vector_X(0.0), displacement_vector_Y(0.0), component_vector_X(0.0), component_vector_Y(0.0),
 initial_coordinate_X(0.0), initial_coordinate_Y(0.0), ending_coordinate_X(0.0), ending_coordinate_Y(0.0),
 Vector2D_user_option(0)
{	}
//==================
Vector2D::~Vector2D()
=default;
//===================
void Vector2D::print_Vector2D_options()
{
	std::cout<<"\tWELCOME TO THE VECTOR-2D LIBRARY"<<'\n'
			 <<"[1] SOLVE VECTOR COMPONENT"<<std::endl;
	std::cin>>Vector2D_user_option;
}
//====================
void Vector2D::calculate_vectorComponents_coordinate()
{
    std::cout<<"Enter coordinates of initial position(EX: 5,2):"<<'\n';
    std::cin>>initial_coordinate_X>>comma_symbol>>initial_coordinate_Y;

    std::cout<<"Enter coordinates of ending position:"<<std::endl;
    std::cin>>ending_coordinate_X>>comma_symbol>>ending_coordinate_Y;

    component_vector_X = (ending_coordinate_X - initial_coordinate_X);
    component_vector_Y = (ending_coordinate_Y - initial_coordinate_Y);

    displacement_vector_X = component_vector_X;
    displacement_vector_Y = component_vector_Y;

    std::cout<<"displacement vector is:"<<'\n';
    std::cout<<displacement_vector_X<<i_symbol<<" + "<<displacement_vector_Y<<j_symbol<<std::endl;
}
//====================
void Vector2D::calculate_X_and_Y_component_Vector()
{
	int Vector2D_function_option {0};
	std::cout<<"* SOLVE BY KNOWING:"<<'\n'
			 <<"[1] COORDINATES"<<std::endl;
	std::cin>>Vector2D_function_option;

	switch(Vector2D_function_option)
	{
		case 1:
		{
			calculate_vectorComponents_coordinate();
			break;
		}
            default:
            {
                std::cout<<"FUNCTION ERROR: INVALID DATA ENTERED"<<std::endl;
                break;
            }
	}

}
//====================
void Vector2D::Vector2D_result()
{
	switch(Vector2D_user_option)
	{
		case 1:
		{
            calculate_X_and_Y_component_Vector();
			break;
		}
		default:
		{
			std::cout<<"VECTOR ERROR: YOU ENTERED INVALID DATA"<<std::endl;
			break;
		}
	}
}
