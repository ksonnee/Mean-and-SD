#include "Calculations.h"
#include <iostream>

Calculations::Calculations()
{
	Mean = 0;
	SD = 0;
	Num1 = 0;
	Num2 = 0;
	Num3 = 0;
	Num4 = 0;
}

Calculations::~Calculations()
{
}

void Calculations::setMean(float Mean_)
{
	Mean = Mean_;
}
float Calculations::getMean()
{
	return Mean;
}
void Calculations::setSD(float SD_)
{
	SD = SD_;
}
float Calculations::getSD()
{
	return SD;
}
void Calculations::setNum1(float Num1_)
{
	Num1 = Num1_;
}
float Calculations::getNum1()
{
	return Num1;
}
void Calculations::setNum2(float Num2_)
{
	Num2 = Num2_;
}
float Calculations::getNum2()
{
	return Num2;
}
void Calculations::setNum3(float Num3_)
{
	Num3 = Num3_;
}
float Calculations::getNum3()
{
	return Num3;
}
void Calculations::setNum4(float Num4_)
{
	Num4 = Num4_;
}
float Calculations::getNum4()
{
	return Num4;
}