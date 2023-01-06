#include <iostream>
#include <cmath>

using namespace std;
float getHeight(float, float);

main()
{	
  float base;
  float angle;
  float result;
  
  cout << "Enter base: ";
  cin >> base;

  cout << "Enter angle: ";
  cin >> angle;

  result = getHeight(base, angle);
  cout << "Height is: " << result << endl;
}

float getHeight(float distance, float angle)
{
 float radian = 57.2958;
 float radians;
 float height;

 radians = angle / radian;
 height = tan(radians) * distance;

 return height;
}

 

