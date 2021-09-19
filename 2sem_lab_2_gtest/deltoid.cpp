#include <iostream>
#include <cmath>
#include "deltoid.h"
#include <stdio.h>

constexpr double pi = 3.1415926535;

Deltoid::Deltoid(double radius) : m_radius{ radius }
{
	if (radius < 0)
	{
		m_radius = 1;
	}
}

int Deltoid::set_radius(double new_radius) {
	if (new_radius > 0) {
		m_radius = new_radius;
		return 0;
	}
	else {
		return 1;
	}
}

double Deltoid::length_betw_deltoid_and_tangent() const {
	return (4 * m_radius);
}

double Deltoid::length_of_curve() const {
	return (16 * m_radius);
}

double Deltoid::area_of_deltoid() const {
	return (2 * pi * m_radius * m_radius);
}

double Deltoid::x_coordinate(const double t) const {
	return (2 * m_radius * cos(t) + m_radius * cos(2 * t));
}

double Deltoid::y_coordinate(const double t) const {
	return (2 * m_radius * sin(t) - m_radius * sin(2 * t));
}

const char* Deltoid::equation_in_decart() const {
	size_t size = sizeof("(x^2 + y^2)^2 + (x^2 + y^2) -  = (x^3 - 3xy^2)");
	char num[20];
	sprintf_s(num, 20, "%.2f", 18 * pow(m_radius, 2));
	size = size + strlen(num);
	sprintf_s(num, 20, "%.2f", 27 * pow(m_radius, 4));
	size = size + strlen(num);
	sprintf_s(num, 20, "%.2f", 8 * m_radius);
	size = size + strlen(num);

	char* equation = new char[size];
	sprintf_s(equation, size, "(x^2 + y^2)^2 + %.2f(x^2 + y^2) - %.2f = %.2f(x^3 - 3xy^2)", 18 * pow(m_radius, 2), 27 * pow(m_radius, 4), 8 * m_radius);

	return equation;
}