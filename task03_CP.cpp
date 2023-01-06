#include <iostream>
using namespace std;

bool symmetric(int);
main ()
{
  int num;
  float isSymmetric;

  cout << "Enter digits: ";
  cin >> num;
  isSymmetric = symmetric(num);
  if (isSymmetric == true)
  {
    cout << "True" << endl;
  }
  if (isSymmetric == false)
  {
    cout << "False" << endl;
  }
}

bool symmetric(int num)
{

  float isSymmetric2;
  float isSymmetric;

  isSymmetric = num / 100;
  isSymmetric2 = num % 10;
  
  if (isSymmetric == isSymmetric2 )
  {
    return true;
  }
  if (isSymmetric != isSymmetric2 )
  {
    return false;
  }

 return 0;
}
