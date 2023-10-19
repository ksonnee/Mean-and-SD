#include <cmath>
#include <corecrt_math_defines.h>
#include <iostream>
#ifndef Calculations_H
#define Calculations_H

class Calculations
{
	Calculations();
	~Calculations();
	void setMean(float Mean_);
	float getMean();
	void setSD(float SD_);
	float getSD();
	void setNum1(float num1_);
	float getNum1();
	void setNum2(float num2_);
	float getNum2();
	void setNum3(float num3_);
	float getNum3();
	void setNum4(float num4_);
	float getNum4();

	double calculateMean() {
		return (Num1 + Num2 + Num3 + Num4) / 4.0;
	}

	double calculateSD() {
		return sqrt(((Num1 - Mean)**2 + (Num2 - Mean)**2 + (num3 - Mean)**2 + (num4 - Mean)**2) / 4.0);
	}
}
#endif Calculations_H

