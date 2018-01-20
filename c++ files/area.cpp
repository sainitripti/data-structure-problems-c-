#include<iostream>
#include<cstdlib>

using namespace std;

class a
{
 public:
 
 double area(double r)
 {
  return 3.14*r*r;
 }

 double area(double b,double h)
 {
  return b*h/2;
 }
};
 

int main(void)
{
 a obj;
 int i;
 double ar;
 while(i!=-1)
{
 cout<<"\n menu: 1. circle   2. triangle   3. exit \n Enter choice: ";
 cin>>i;
 switch(i)
 { 
   case 1: double r;
  cout<<"\n Enter radius: ";
  cin>>r;
  ar=obj.area(r);
  cout<<"\n Area of circle = "<<ar<<endl;
  break;

  case 2: double b,h;
  cout<<"\n Enter base and height: ";
  cin>>b>>h;
  ar=obj.area(b,h);
  cout<<"\n Area of triangle = "<<ar<<endl;
  break;

  case 3: exit(0);
  
  default: cout<<"\n Wrong choice!! \n ";
 }
}
 return 0;
}
