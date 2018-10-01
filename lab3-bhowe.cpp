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
using std::endl;

int main()
{
  // Part 1
  cout << "===================== PART 1 (short)" << endl;
  short nOne=0, sumOne=0;
  
    while(sumOne >=0)
  {
      nOne++;
      sumOne = sumOne + nOne;
  }
  cout << "n for error: " << nOne << endl;


  // Part 2
  cout << "===================== PART 2 (long)" << endl;
  long nTwo = 0, sumTwo = 0;
  while (sumTwo >= 0)
  {
    nTwo++;
    sumTwo = sumTwo + nTwo;
  }
  cout << "n for error: " << nTwo << endl;


  // Part 3
  cout << "===================== PART 3 (float)" << endl;
  long nThree=0;
  float productThree=1;
  while (productThree < FLT_MAX)
    // on my system float didn't overflow negative, but instead just went to inf.
  {
    nThree++;
    productThree = productThree * nThree;
  }
  cout << "n for error: " << nThree << endl;

  // Part 4
  cout << "===================== PART 4 (double)" << endl;
  long nFour = 0;
  double productFour = 1;
  while (productFour < DBL_MAX)
    // on my system float didn't overflow negative, but instead just went to inf.
  {
    nFour++;
    productFour = productFour * nFour;
  }
  cout << "n for error: " << nFour << endl;

  // Part 5
  cout << "===================== PART 5a (float)" << endl;
  long nFiveA = 0;
  float sumFiveA = 0;
  while (sumFiveA < 12)
  {
    nFiveA++;
    sumFiveA = sumFiveA + (1/static_cast<float>(nFiveA));
    //cout << nFiveA<<" : "<<sumFiveA << endl;
    //system("pause");
  }
  cout << "n for error: " << nFiveA << endl;

    system("pause");
  return 0;
}