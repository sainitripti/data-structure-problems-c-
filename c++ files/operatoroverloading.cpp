#include<iostream>
using namespace std;

class complex
{
 int real;
 int imag;
 
 public:
 
 complex()
 {
  real=0;
  imag=0;
 }
 
 complex(int r,int i)
 {
  real=r;
  imag=i;
 }
 
 void output()
 {
  cout<<real<<" +i "<<imag<<endl;
 }

 friend complex operator+(const complex c1,const complex c2)
 {
  complex c3;
  c3.real=c1.real+c2.real;
  c3.imag=c1.imag+c2.imag;
  return c3;
 }

 friend complex operator-(const complex c1,const complex c2)
 {
  complex c3;
  c3.real=c1.real-c2.real;
  c3.imag=c1.imag-c2.imag;
  return c3;
 }
};

int main()
{
 complex c1;
 complex c2(2,3),c3(4,5);
 c1=c2+c3;
 c2.output();
 cout<<" + "<<endl;
 c3.output();
 cout<<" = "<<endl;
 c1.output();
 return 0;
}
