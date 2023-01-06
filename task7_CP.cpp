#include <iostream>
#include <cmath>
using namespace std;

main ()
{
int angle;
float radian;
float result;

cout << "Enter number: ";
cin >> angle;
radian = angle / 57.2958;
result = sin(radian);

cout << "SIN of number is: " << result << endl;


}