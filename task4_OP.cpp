#include <iostream>
#include <cmath>
using namespace std;

main ()
{
int num1;
int num2;
int isSmaller;

cout << "Enter first number: ";
cin >> num1;

cout << "Enter second number: ";
cin >> num2;

isSmaller = min(num1, num2);

cout << "Smaller number is: " << isSmaller << endl;


}