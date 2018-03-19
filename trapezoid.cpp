#include<iostream>
#include<cmath>
const double a=0;
const double b=M_PI;
double f(double x);
double trapezoid_regular(int n, double x, double y, double (*func)(double));
int main()
{
  std::cout.precision(16);
  double c;
  int n,i;
  n=1;
  for(i=1;i<50;i++)
    {
      c=trapezoid_regular(n,a,b,f);
      std::cout<<n<<"\t"<<c<<std::endl;
      n+=1;
    }
}
double f(double x)
{
  double a;
  a=std::sin(x);
  return a;
}
double trapezoid_regular(int n, double x, double y, double (*func)(double))
{
  double sum, ter,h,xi;
  double i;
  h=(y-x)/n;
  sum=0.5*(func(x)+func(y));
  for(i=1;i<=n-1;i++)
    {
      xi=a+i*h;
      ter=func(xi);
      sum+=ter;
    }
  return h*sum;
  // return h;
}
