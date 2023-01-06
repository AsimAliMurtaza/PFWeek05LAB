#include <iostream>
using namespace std;

int sum(int);

main ()
{
    int num;
    float result;

        cout << "Enter 5 digit number: ";
        cin >> num;
        result = sum(num);
            if (result == 1 )
            {
            cout << "Number is Oddish" << endl;
            }
                if (result != 1 )
            {
            cout << "Number is Evenish" << endl;
            }

}

int sum(int num)
{
   int mod1;
   int mod2;
   int mod3;
   int mod4;
   int mod5;
   int sum;
   int odd;

        mod1 = num % 10;
        mod2 = (num / 10) % 10;
        mod3 = (num / 100) % 10;
        mod4 = (num / 1000) % 10;
        mod5 = (num / 10000) % 10;

        sum = mod1 + mod2 + mod3 + mod4 + mod5;
        odd = sum % 2;

            if (odd == 1)
            {
                return odd;
            }
            if (odd != 1)
            {
                return odd;
            }


}