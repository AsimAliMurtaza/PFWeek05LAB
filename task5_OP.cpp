#include <iostream>
#include <cmath>
using namespace std;

main ()
{
    float num1;
    float num2;
    float isPower;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        isPower = pow(num1, num2);

        cout << "Result is: " << isPower << endl;

}