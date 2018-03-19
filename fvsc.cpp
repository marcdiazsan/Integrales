#include <iostream>
#include <cmath>
double fun (double x);
int main()
{double x,h,a,b;
  std::cout.precision(16);
  x=2;
  h=0.01;
  a=(fun(x+h)-fun(x))/h;
  b=(fun(x+(h/2))-fun(x-(h/2)))/h;
  std::cout<<a<<"\t"<<b<<std::endl;
  
  
}
double fun(double x)
{
  return std::sin(x);
}

