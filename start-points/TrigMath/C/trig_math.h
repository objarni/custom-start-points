#ifndef TRIGMATH_INCLUDED
#define TRIGMATH_INCLUDED

#define _USE_MATH_DEFINES
#include <math.h>

const double PI = 3.1415;
const double SQUARED_PI = PI * PI;
const double HALF_PI = PI / 2;
const double QUARTER_PI = HALF_PI / 2;
const double TWO_PI = 2 * PI;
const double THREE_PI_HALVES = TWO_PI - HALF_PI;
const double DEG_TO_RAD = PI / 180;
const double HALF_DEG_TO_RAD = PI / 360;
const double RAD_TO_DEG = 180 / PI;
const double SQRT_OF_TWO = 1.41421356237;
const double HALF_SQRT_OF_TWO = 0.70710678118;

double Sin(double angle);
double Cos(double angle);
double Tan(double angle);
double Csc(double angle);
double Sec(double angle);
double Cot(double angle);
double Asin(double value);
double Acos(double value);
double Atan(double value);
double Atan2(double y, double x);
double Acsc(double value);
double Asec(double value);
double Acot(double value);


#endif
