#include <iostream>
using namespace std;

string isAlphabet(char);
main()
{
   char input;
   string message;

   cout << "Enter character: ";
   cin >> input;

   message = isAlphabet(input);
   cout << message << endl;

}

string isAlphabet(char input)
{

    if (input == 'A')
    {
        string message;
        message = "You entered Capital A";
        return message;
    }

    if (input != 'A')
    {   
        string message;
        message = "You entered small A";
        return message;
    }


}