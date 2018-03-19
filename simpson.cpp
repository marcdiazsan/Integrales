#include<iostream>
#include<cmath>
const double a=0;
const double b=M_PI;
double f(double x);
double simpson1(double x, double y,double(*func)(double));
double simpson2(double x, double y,int n, double(*func)(double)); 
int main()
{
  double m,n,N;
  N=30;
  m=simpson1(a,b,f);
  n=simpson2(a,b,N,f);
  std::cout<<m<<"\t"<<n<<std::endl;
}
double f(double x)
{
  double f;
  f=std::sin(x);
}
double simpson1(double x, double y, double(*func)(double))
{
  double c;
  c=((y-x)/6)*(func(a)+4*func((x+y)/2)+func(y));
  return c;

}
double simpson2(double x, double y,int n, double(*func)(double))
{
  double h, sum1, sum2, i,j,ter1,ter2,f;
  h=(y-x)/n;
  sum1=func(x);
  sum2=func(b);
  for(i=1;i<=(n/2)-1;i++)
    {
      double x2i=x+(2*i*h);
      ter1=func(x2i);
      sum1+=2*ter1;
    }
  for(j=1;j<=n/2;j++)
    {
      double x2j=x+(2*j-1)*h;
      ter2=func(x2j);
      sum2+=4*ter2;
    }
  f=sum1+sum2;
  return (h/3)*f;
}
