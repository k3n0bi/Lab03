// Ben Howe
// COSC 2030
// 10/1/2018
// Lab 03

//Investigate numeric errors.
// Report the value for n that produces an overflow error.
// 1) Sum 1 through n using short.
// 2) Sum 1 through n using long.
// 3) n! using float
// 4) n! using double
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	// Question 1
	short nOne =0, sumOne=0;
	cout << "1.) Summation i (from i=1 to n) with short" << endl;
	while (nOne != -1)
	{
		nOne = 0;
		sumOne = 0;
		cout << "Enter a value for n (-1 to exit): ";
		cin >> nOne;
		for (int i = 1; i <= nOne; i++)
		{
			sumOne = sumOne + i;
		}
		if (nOne != -1)
		{
			cout << "The sum is: " << sumOne << endl;
		}
	}

	// Question 2
	nOne = 0;
	sumOne = 0;
	while (sumOne >= 0)
	{
		nOne++;
		sumOne = sumOne + nOne;
	}
	cout << "2.) n for error: " << nOne << endl;
	
	// Question 3a
	cout << "3a.) Summation i (from i=1 to n) with long" << endl;
	long nTwo = 0, sumTwo = 0;

	while (nTwo != -1)
	{
		nTwo = 0;
		sumTwo = 0;
		cout << "Enter a value for n (-1 to exit): ";
		cin >> nTwo;
		for (int i = 1; i <= nTwo; i++)
		{
			sumTwo = sumTwo + i;
		}
		if (nTwo != -1)
		{
			cout << "The sum is: " << sumTwo << endl;
		}
	}

	// Question 3b

	nTwo = 0;
	sumTwo = 0;

	while (sumTwo >= 0)
	{
		nTwo++;
		sumTwo = sumTwo + nTwo;
	}
	cout << "3b.) n for error: " << nTwo << endl;


	// Question 4a
	cout << "4a.) n! with n as long and n! as float" << endl;
	long nThree = 0;
	float productThree = 1;



	while (nThree != -1)
	{
		nThree = 0;
		productThree = 1;
		cout << "Enter a value for n (-1 to exit): ";
		cin >> nThree;
		for (int i = 1; i <= nThree; i++)
		{
			productThree = productThree * i;
		}
		if (nThree != -1)
		{
			cout << "The product is: " << productThree << endl;
		}
	}



	// Question 4b
	nThree = 0;
	productThree = 1;
	while (productThree < FLT_MAX)
		// on my system float didn't overflow negative, but instead just went to inf.
	{
		nThree++;
		productThree = productThree * nThree;
	}
	cout << "4b.) n for error: " << nThree << endl;

	// Question 5a
	cout << "5a.) n! with n as long and n! as double" << endl;
	long nFour = 0;
	double productFour = 1;

	while (nFour != -1)
	{
		nFour = 0;
		productFour = 1;
		cout << "Enter a value for n (-1 to exit): ";
		cin >> nFour;
		for (int i = 1; i <= nFour; i++)
		{
			productFour = productFour * i;
		}
		if (nFour != -1)
		{
			cout << "The product is: " << productFour << endl;
		}
	}


	// Question 5b
	nFour = 0;
	productFour = 1;
	while (productFour < DBL_MAX)
		// on my system float didn't overflow negative, but instead just went to inf.
	{
		nFour++;
		productFour = productFour * nFour;
	}
	cout << "5b.) n for error: " << nFour << endl;

	// Question 6a
	cout << "6a. Summation 1/n (i=1 to n) with n as int" << endl;
	int nA = 0; //74 is the last time this generates a value of 1. n=75 produces 0.99999

	while (nA != -1)
	{


		float ratioA = 0.0;
		float sumRatioA = 0.0;

		cout << "Enter a value for n (-1 to exit): ";
		cin >> nA;

		ratioA = 1.0 / static_cast<float>(nA);

		for (int i = 1; i <= nA; i++)
		{
			sumRatioA = sumRatioA + ratioA;
		}
		if (nA != -1)
		{
			cout << "sum of " << nA << " ratios: " << sumRatioA << endl;
		}
	}





	// Question 6b
	cout << "6b. Summation 1/n (i=1 to n) with n as long" << endl;
	long nB = 0;
	double ratioB = 0.0;
	double sumRatioB = 0.0;

	while (nB != -1)
	{
		ratioB = 0.0;
		sumRatioB = 0.0;

		cout << "Enter a value for n (-1 to exit): ";
		cin >> nB;

		ratioB = 1.0 / static_cast<double>(nB);

		for (int i = 1; i <= nB; i++)
		{
			sumRatioB = sumRatioB + ratioB;
		}
		if (nB != -1)
		{
			cout << "sum of " << nB << " ratios: " << sumRatioB << endl;
		}
	}
	
	system("pause");


	return 0;
}