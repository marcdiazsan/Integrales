#include<iostream>
#include<cmath>
double funcion(double x);
int main()
{
  double x, h,a;
  x=1;
  h=0.01;
  a=(funcion(x+(h/2))-funcion(x-(h/2)))/h;
  std::cout<<a<<std::endl;
  
}
double funcion(double x)
{
  return std::atan(x);

}
