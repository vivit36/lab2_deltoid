#pragma once
#include <iostream>


class Deltoid {
private:
	double m_radius;

public:
	explicit Deltoid(double radius = 1);
	~Deltoid() = default;

	inline double get_radius() {
		return m_radius;
	}

	int set_radius(double new_radius);

	double length_betw_deltoid_and_tangent() const;
	double length_of_curve() const;
	double area_of_deltoid() const;

	double x_coordinate(const double t) const;
	double y_coordinate(const double t) const;

	const char* equation_in_decart() const;
};