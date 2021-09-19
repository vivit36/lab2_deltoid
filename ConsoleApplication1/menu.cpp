#include <iostream>
#include "../2sem_lab_2_gtest/deltoid.h"
#include "input.h"





int menu(Deltoid& deltoid)
{
	std::cout << std::endl;
	std::cout << "If you want to change radius, enter 1" << std::endl;
	std::cout << "If you want to get radius, enter 2" << std::endl;
	std::cout << "If you want to find length between area of deltoid and tangent, enter 3" << std::endl;
	std::cout << "If you want to find curve length, enter 4" << std::endl;
	std::cout << "If you want to find square of deltoid, enter 5" << std::endl;
	std::cout << "If you want to find coordinates of deltoid, enter 6" << std::endl;
	std::cout << "If you want to find the equation of deltoid, enter 7" << std::endl;
	std::cout << "If you want to quit, enter 0" << std::endl;

	std::cout << "Your choise: ";

	int d;
	const char* pr = "";
	const char* yc = "";

	do {
		std::cout << pr;
		std::cout << yc;
		pr = "You are wrong, repeat please\n";
		yc = "Your choise: ";
		if (get_int(d) == -1) {
			d = -1;
		}
	} while ((d < 0) || (d > 7));
	std::cout << std::endl;

	switch (d)
	{
	case 1:
	{
		pr = "";
		yc = "";
		double r;
		std::cout << "Please, enter the radius: ";
		do {
			std::cout << pr;
			std::cout << yc;
			pr = "You are wrong, repeat please\n";
			yc = "Please, enter the radius: ";
		} while (get_double(r) == -1);
		std::cout << std::endl;

		int k = deltoid.set_radius(r);
		if (k == 1) {
			std::cout << "Uncorrect value of radius, radius don't change" << std::endl;
		}
	}
	break;

	case 2:
	{
		double r = deltoid.get_radius();
		std::cout << "Radius: " << r << std::endl;
	}
	break;

	case 3:
	{
		double l = deltoid.length_betw_deltoid_and_tangent();
		std::cout << "Length between deltoid and tangent: " << l << std::endl;
	}
	break;


	case 4:
	{
		double l = deltoid.length_of_curve();
		std::cout << "Curve length: " << l << std::endl;
	}
	break;


	case 5:
	{
		double s = deltoid.area_of_deltoid();
		std::cout << "Suare of deltoid: " << s << std::endl;
	}
	break;


	case 6:
	{
		pr = "";
		yc = "";
		double t;
		std::cout << "Please, enter parameter: ";
		do {
			std::cout << pr;
			std::cout << yc;
			pr = "You are wrong, repeat please\n";
			yc = "Please, enter parameter: ";
		} while (get_double(t) == -1);
		std::cout << std::endl;

		double x = deltoid.x_coordinate(t);
		double y = deltoid.y_coordinate(t);

		std::cout << "Coordinates: x =" << x << " y =" << y << std::endl;
	}
	break;


	case 7:
	{
		const char* s = deltoid.equation_in_decart();
		std::cout << "Equation of deltoid: " << s << std::endl;
		delete[] s;
	}
	break;

	case 0:
	{
		return 0;
	}
	break;
	}
	return d;
}