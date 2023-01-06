#include <iostream>
using namespace std;

int add(int, int);
main ()
{
int num1;
int num2;
int result;

cout << "Enter first number: ";
cin >> num1;

cout << "Enter second number:";
cin >> num2;

result = add(num1, num2);
cout << "Sum of two numbers is: " << result << endl;
}

int add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
     return sum;
}