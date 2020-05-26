#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef enum  {
//    0			1			  2			3
	UNKNOWN, EQUILATERAL, ISOSCELES, SCALENE
}TriangleType;
typedef enum {
	VALID, INVALID
}checkType;

TriangleType getTriangleType(int side1, int side2, int side3);
checkType	checkINTnegativeorzero(int side1, int side2, int side3);

#endif // TRIANGLE_H
