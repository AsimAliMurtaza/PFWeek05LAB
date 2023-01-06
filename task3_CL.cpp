#include <iostream>
#include <cmath>
using namespace std;

main ()
{
int num1;
int num2;
int isGreater;

cout << "Enter first number: ";
cin >> num1;

cout << "Enter second number: ";
cin >> num2;

isGreater = max(num1, num2);

cout << "Greater number is: " << isGreater << endl;


}