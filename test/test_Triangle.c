#include "unity.h"

#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}



void test_getTriangleType_given_2_2_1_expect_ISOSCELES()
{
	TriangleType type = getTriangleType(2,2,1);
	TEST_ASSERT_EQUAL(ISOSCELES, type);
}
void test_getTriangleType_given_1_2_2_expect_ISOSCELES()
{
	TriangleType type = getTriangleType(1,2,2);
	TEST_ASSERT_EQUAL(ISOSCELES, type);
}
void test_getTriangleType_given_2_1_2_expect_ISOSCELES()
{
	TriangleType type = getTriangleType(2,1,2);
	TEST_ASSERT_EQUAL(ISOSCELES, type);
}
void test_getTriangleType_given_5_5_5_expect_EQUILATERAL()
{
	TriangleType type = getTriangleType(5,5,5);
	TEST_ASSERT_EQUAL(EQUILATERAL, type);
}
void test_getTriangleType_given_5_2_8_expect_SCALENE()
{
	TriangleType type = getTriangleType(5,2,8);
	TEST_ASSERT_EQUAL(SCALENE, type);
}
