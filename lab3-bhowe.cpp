// lab3-bhowe.cpp
// Ben Howe
// COSC 2030
// 10/1/2018
// Lab 03

//Investigate numeric errors.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

float f_factorial(long n);
double d_factorial(long n);

float f_sum_minus_one(int n);
double d_sum_minu_one(int n);

int main()
{
  // Question 1
  short nOne = 0, sumOne = 0;
  cout << "1.) Summation i (from i=1 to n) with short" << endl;
  while (nOne != -1)
  {
    nOne = 0;
    sumOne = 0;
    cout << "Enter a value for n (-1 to skip): ";
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
  cout << "====================================="<< endl;
  cout << "2.) n for error: " << nOne << endl;

  // Question 3a
  cout << "=====================================" << endl;
  cout << "3a.) Summation i (from i=1 to n) with long" << endl;
  long nTwo = 0, sumTwo = 0;

  while (nTwo != -1)
  {
    nTwo = 0;
    sumTwo = 0;
    cout << "Enter a value for n (-1 to skip): ";
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
  cout << "=====================================" << endl;
  cout << "3b.) n for error: " << nTwo << endl;


  // Question 4a
  cout << "=====================================" << endl;
  cout << "4a.) n! with n as long and n! as float" << endl;
  long nThree = 0;
  float productThree = 1;
   
  while (nThree != -1)
  {
    
    cout << "Enter a value for n (-1 to skip): ";
    cin >> nThree;
    
    if (nThree != -1)
    {
      cout << "The product is: " << f_factorial(nThree) << endl;
    }
  }



  // Question 4b
  nThree = 0;
  //productThree = 1;
  while (productThree < FLT_MAX)
    // on my system float didn't overflow negative, but instead just went to inf.
  {
    nThree++;
    productThree = productThree * nThree;
  }
  cout << "=====================================" << endl;
  cout << "4b.) n for error: " << nThree << endl;

  // Question 5a
  cout << "=====================================" << endl;
  cout << "5a.) n! with n as long and n! as double" << endl;
  long nFour = 0;
  double productFour = 1;

  while (nFour != -1)
  {
    cout << "Enter a value for n (-1 to skip): ";
    cin >> nFour;
   
    if (nFour != -1)
    {
      cout << "The product is: " << d_factorial(nFour) << endl;
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
  cout << "=====================================" << endl;
  cout << "5b.) n for error: " << nFour << endl;

  // Question 6a
  cout << "=====================================" << endl;
  cout << "6a. (Summation 1/n)-1 (i=1 to n) using floats" << endl;

  int nA = 0;
  float ratioA = 0.0;
  float sumRatioA = 0.0;

  while (nA != -1)
  {
    cout << "Enter a value for n (-1 to skip): ";
    cin >> nA;

    if (nA != -1)
    {
      cout << "Result after adding " << nA << " ratios and subtracting one: " << f_sum_minus_one(nA) << endl;
    }
  }

   
  // Question 6b
  cout << "=====================================" << endl;
  cout << "6b. (Summation 1/n)-1 (i=1 to n) with using double" << endl;
  int nB = 0;
  double ratioB = 0.0;
  double sumRatioB = 0.0;

  while (nB != -1)
  {
    cout << "Enter a value for n (-1 to skip): ";
    cin >> nB;

    if (nB != -1)
    {
      //cout << "Result after adding " << nB << " ratios and subtracting one: " << sumRatioB << endl;
      cout << "Result after adding " << nB << " ratios and subtracting one: " << d_sum_minu_one(nB) << endl;
    }
  }

  // Question 7
  cout << "=====================================" << endl;
  cout << "7.) Look at what's happening" << endl;
  for (float i = 3.4; i < 4.4; i += 0.2)
  {
    cout << "i = " << i << endl;
  }

  // Question 8
  cout << "=====================================" << endl;
  cout << "8.) Look at what's happening" << endl;
  for (double i = 3.4; i < 4.4; i += 0.2)
  {
    cout << "i = " << i << endl;
  }
 
  return 0;
}


float f_factorial(long n)
  {
    float temp_product = (1.0f);
  
    for (int i = 1; i <= n; i++)
    {
      temp_product = temp_product * i;
    }

    return temp_product;

  }
double d_factorial(long n)
  {
    double temp_product = 1.0;

    for (int i = 1; i <= n; i++)
    {
      temp_product = temp_product * i;
    }
    return temp_product;
  }

float f_sum_minus_one(int n)
  {
    float ratio = (0.0f);
    float sum = (0.0f);

    ratio = (1.0f)/ static_cast<float>(n);

    for (int i = 1; i <= n; i++)
    {
      sum = sum + ratio;
    }
    sum = sum - 1;
    return sum;
  }

double d_sum_minu_one(int n)
{
  double ratio = 0.0;
  double sum = 0.0;

  ratio = 1.0 / static_cast<double>(n);

  for (int i = 1; i <= n; i++)
  {
    sum = sum + ratio;
  }
  sum = sum - 1;
  return sum;
}
