#include "CAS-library/CAS.h"
#include "CAS-library/Electric.h"
#include "CAS-library/Vector2D.h"
#include <iostream>
//===================
int32_t main()
{
	CAS CAS_app;
	while(1)
	{
		CAS_app.print_CCAS_option();
		CAS_app.result();
	}
}
