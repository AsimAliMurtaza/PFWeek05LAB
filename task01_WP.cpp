#include <iostream>
#include<cmath>
using namespace std;

float mul(float);

main ()
{
    float multi;
    float num;

    cout << "Enter a number: ";
    cin >> num;

    multi = mul(num);
    cout << "Number after multiplication with 5 is: " << multi << endl;

}
float mul(float num)
{
   float multiply;
   multiply = num * 5;

   return multiply;


}