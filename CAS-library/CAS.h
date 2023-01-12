#pragma once
//===================================
constexpr double pi {3.1415926535897932384626433};
//===================================
constexpr double permittivity_of_space {8.85E-12};
//==================================
constexpr double Colombs_constant {1/((4*pi*permittivity_of_space))};
//==================================
//=========
class CAS
{

public:
	CAS();
	~CAS();
	void print_CCAS_option();
	void change_angle_mode();
	void result();
public:
	char comma_symbol;
	char i_symbol;
	char j_symbol;
private:
	bool radian_mode;
	bool degree_mode;



	int CAS_user_option;
};
