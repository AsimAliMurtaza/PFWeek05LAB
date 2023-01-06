#include <iostream>
#include <cmath>
using namespace std;

float quadraticMinus(float a, float b, float c);
float quadraticPlus(float a, float b, float c);

main()
{
  float a;
  float b;
  float c;
  float plus;
  float minus;

  cout << "Enter co-efficient of X2: ";
  cin >> a;

  cout << "Enter co-efficient of X: ";
  cin >> b;

  cout << "Enter constant C: ";
  cin >> c;
 
  plus = quadraticPlus(a, b, c);
  cout << "Positive root is: " << plus << endl;

  minus = quadraticMinus(a, b, c);
  cout << "Negative root is: " << minus << endl;

  
}

float quadraticPlus(float a, float b, float c)
{
  
   float bSq;
   float fourAC;
   float minus;
   float rootSq;
   float twoA;
   float plusB;
   float finalPlus;

   bSq = pow(b, 2);
   fourAC = 4 * a * c;
   minus = bSq - fourAC;
   rootSq = sqrt(minus);
   twoA = 2 * a;
   plusB = ((-1 * b) + rootSq);
   finalPlus = plusB / twoA;

   return finalPlus;

}

float quadraticMinus(float a, float b, float c)
{
  
   float bSq;
   float fourAC;
   float minus;
   float rootSq;
   float twoA;
   float minusB;
   float finalMinus;

   bSq = pow(b, 2);
   fourAC = 4 * a * c;
   minus = bSq - fourAC;
   rootSq = sqrt(minus);
   twoA = 2 * a;
   minusB = ((-1 * b) - rootSq);
   finalMinus = minusB / twoA;
  
   return finalMinus;

}

