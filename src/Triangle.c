#include "Triangle.h"

//TDD = Test-Driven Development
// 1. Write test (next test)
// 2. Write code to pass the test
// 3. If test failing, go to step 2
// 4. Go to step 1



/**
* Find out if a given triangle is one of the following types:
*	EQUILATERAL	= all equal sides
* 	ISOSCELES	= 2 has equal sides
*	SCALENE		= no equal sides
*/
TriangleType getTriangleType(int side1, int side2, int side3)
{
	if (side1==side2 && side2==side3)
	{
		return EQUILATERAL;
	}
	else if (side1==side2 || side2==side3 || side1==side3)
	{
		return ISOSCELES;
	}
	{
		return SCALENE;
	}
}

