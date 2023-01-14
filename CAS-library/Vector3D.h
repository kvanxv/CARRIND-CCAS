#pragma once
//=====================
#include "CAS.h"
//=====================
class Vector3D : public CAS
{
public:
	Vector3D();
	~Vector3D();
	void print_Vector3D_options();
	void calculate_Vector3D_endPoints();
	void calculate_VectorMagnitude();
	void Vector3D_result();
private:
	double a_component;
	double b_component;
	double c_component;

	double Vector_startingPoint_X;
	double Vector_startingPoint_Y;
	double Vector_startingPoint_Z;
	double Vector_terminal_point_X;
	double Vector_terminal_point_Y;
	double Vector_terminal_point_Z;

	double Vector_magnitude;
	int Vector3D_option;
};
