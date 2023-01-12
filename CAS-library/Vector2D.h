#pragma once
//==========
#include "CAS.h"
//==========
class Vector2D : public CAS
{
public:
	Vector2D();
	~Vector2D();
	
	void print_Vector2D_options();
	void calculate_vectorComponents_coordinate();
	void calculate_X_and_Y_component_Vector();

	void Vector2D_result();


private:
	double displacement_vector_X;
	double displacement_vector_Y;
	double component_vector_X;
	double component_vector_Y;
	double initial_coordinate_X;
	double initial_coordinate_Y;
	double ending_coordinate_X;
	double ending_coordinate_Y;
	int Vector2D_user_option;
};
