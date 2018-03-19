#include<iostream>
#include<cmath>
double funcion (double x);

int main()
{double x,h,f1,f2,f;
  x=2;
  h=0.01;
  f1=(funcion(x+h)-funcion(x))/h;
  f2=(funcion(x)-funcion(x-h))/h;
  f=(f1-f2)/h;
  std::cout<<f<<std::endl;
  

}
double funcion (double x)
{
  return std::sin(x);
}
