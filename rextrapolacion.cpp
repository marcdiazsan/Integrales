#include<iostream>
#include<cmath>
using fptr = double(double);
double funcion(double x);
double cdiff(double x, double h,double (*func)(double));
int main()
{
  double x, h1,h2,a,b,d;
  x=2;
  h1=1;
  h2=h1/2;
  a=cdiff(x,h1, funcion);
  b=cdiff(x,h2, funcion);
  d=(4.0/3.0)*b-(1.0/3.0)*a;
  std::cout<<d<<std::endl;
  
}
double funcion(double x)
{double a;
  a=-0.1*(std::pow(x,4))-0.15*(std::pow(x,3))-0.5*(std::pow(x,2))-0.25*(x)+1.2;
  return a;

}

double cdiff (double x, double h,double (*func)(double))
{double d;

  d=(func(x+(h/2))-func(x-(h/2)))/h;
  return d;
  

}
