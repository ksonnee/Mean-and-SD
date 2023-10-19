#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include "Calculations.h"

using namespace std;

int main()
{
	//Declaring the values as floats
	float Num1, Num2, Num3, Num4;

	//Creating the object for my calculations
	Calculations myCalculations;

	//Setting the values based on users input
	cout << "Enter 4 numbers in a separated list:" << endl;
	cin >> Num1 >> Num2 >> Num3 >> Num4;
	myCalculations.setNum1(Num1);
	myCalculations.setNum1(Num2);
	myCalculations.setNum3(Num3);
	myCalculations.setNum4(Num4);

	float Mean = myCalculations.Mean();
	float SD = myCalculations.SD();

	cout << " Mean = " << Mean << endl;
	cout << " Standard Deviation = " << setprecision(4) << SD << endl;

	//Opening the file
	ifstream inFile;
	inFile.open("MeanStdIN.dat");

	if (!inFile) {
		cout << "Error opening file";
		return 1;

	}

	//read data and converts numbers to the input values
	inFile >> Num1 >> Num2 >> Num3 >> Num4;

	//Creating object for file data
	Calculations fileCalculations;

	//Setting variables from the input
	fileCalculations.setNum1(Num1);
	fileCalculations.setNum2(Num2);
	fileCalculations.setNum3(Num3);
	fileCalculations.setNum4(Num4);

	Mean = fileCalculations.Mean();
	SD = fileCalculations.SD();

	ofstream outFile;
	outFile.open("MeanStdOUT.dat");

	if (!outFile) {
		cout << "Error opening file" << endl;
		return 1;
	}

	outFile << "The mean of your numbers is: " << fileCalculations.Mean() << endl;
	outFile << "The Standard Deviation of your numbers is: " << setprecision(4) << fileCalculations.SD() << endl;

	outFile.close();
	inFile.close();

	return 0;
}
	




