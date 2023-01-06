#include <iostream>
using namespace std;

void numberInAlphabets(int);

main()
{
    int num;

    cout << "Enter two digit number: ";
    cin >> num;

    numberInAlphabets(num);
}

void numberInAlphabets(int num)
{
    float num1;
    float num2;

    num1 = num % 10;
    num2 = num / 10;


    if (num == 10)
    {
        cout << "Ten";
    }
    if (num2 == 2)
    {
        cout << "Twenty";
    }
    if (num2 == 3 )
    {
        cout << "Thirty";
    }
    if (num2 == 4)
    {
        cout << "Forty";
    }
    if (num2 == 5)
    {
        cout << "Fifty";
    }
    if (num2 == 6)
    {
        cout << "Sixty";
    }
    if (num2 == 7)
    {
        cout << "Seventy";
    }
    if (num2 == 8)
    {
        cout << "Eighty";
    }
    if (num2 == 9)
    {
        cout << "Ninety";
    }
    if (num1 == 1)
    {
        cout << "One";
    }
    if (num1 == 2)
    {
        cout << "Two";
    }
    if (num1 == 3)
    {
        cout << "Three";
    }
    if (num1 == 4)
    {
        cout << "Four";
    }
    if (num1 == 5)
    {
        cout << "Five";
    }
    if (num1 == 6)
    {
        cout << "Six";
    }
    if (num1 == 7)
    {
        cout << "Seven";
    }
    if (num1 == 8)
    {
        cout << "Eight";
    }
    if (num1 == 9)
    {
        cout << "Nine";
    }
}