#include "../2sem_lab_2_gtest/deltoid.h"
#include "gtest/gtest.h"

constexpr double pi = 3.1415926535;

TEST(MyConstructor, DefaultConstructor) {
	Deltoid t_deltoid;
	ASSERT_EQ(1, t_deltoid.get_radius());
}

TEST(MyConstructor, Constructor) {
	Deltoid t_deltoid{ 20 };
	ASSERT_EQ(20, t_deltoid.get_radius());
}

TEST(MyConstructor, Wrong_Constructor) {
	Deltoid t_deltoid{ -10 };
	ASSERT_EQ(1, t_deltoid.get_radius());
}

TEST(MyMethods, getRadius) {
	Deltoid t_deltoid{ 5 };
	ASSERT_EQ(5,t_deltoid.get_radius());

}

TEST(MyMethods, setradius) {
	Deltoid t_deltoid{ 5 };
	t_deltoid.set_radius(5.8);
	ASSERT_EQ(5.8, t_deltoid.get_radius());
}


TEST(MyMethods, length_between_tangent) {
	Deltoid t_deltoid{ 5.6 };
	ASSERT_EQ(4 * 5.6, t_deltoid.length_betw_deltoid_and_tangent());
}

TEST(MyMethods, curve_lenth) {
	Deltoid t_deltoid{ 10.325 };
	ASSERT_EQ(16 * 10.325 , t_deltoid.length_of_curve());
}


TEST(MyMethods, area_of_deltoid) {
	Deltoid t_deltoid{ 34.777 };
	ASSERT_EQ(2 * pi * 34.777 * 34.777, t_deltoid.area_of_deltoid());
}

TEST(MyMethods, x_coordinate) {
	Deltoid t_deltoid{ 0.555 };
	ASSERT_EQ(2 * 0.555 * cos(10) + 0.555 * cos(2 * 10), t_deltoid.x_coordinate(10));
}

TEST(MyMethods, y_coordinate) {
	Deltoid t_deltoid{ 0.555 };
	ASSERT_EQ(2 * 0.555 * sin(10) - 0.555 * sin(2 * 10), t_deltoid.y_coordinate(10));
}

TEST(MyMethods, equation) {
	Deltoid t_deltoid{ 100 };
	ASSERT_STREQ("(x^2 + y^2)^2 + 180000.00(x^2 + y^2) - 2700000000.00 = 800.00(x^3 - 3xy^2)", t_deltoid.equation_in_decart());
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}