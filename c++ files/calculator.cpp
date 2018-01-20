#include<iostream>
using namespace std;

class calculator
{
 int num1;
 int num2;
 float num3;
 float num4;
 
 public:
 
 void add(int num1,int num2);
 void sub(int num1,int num2);
 void mul(int num1,int num2);
 void div(int num1,int num2);
 void add(double num3,double num4);
 void sub(double num3,double num4);
 void mul(double num3,double num4);
 void div(double num3,double num4);
};

void calculator::add(int num1,int num2)
{
 cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
}

void calculator::sub(int num1,int num2)
{
 cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
}

void calculator::mul(int num1,int num2)
{
 cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
}

void calculator::div(int num1,int num2)
{
 cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
}

void calculator::add(double num3,double num4)
{
 cout<<num3<<" + "<<num4<<" = "<<num3+num4<<endl;
}

void calculator::sub(double num3,double num4)
{
 cout<<num3<<" - "<<num4<<" = "<<num3-num4<<endl;
}

void calculator::mul(double num3,double num4)
{
 cout<<num3<<" * "<<num4<<" = "<<num3*num4<<endl;
}

void calculator::div(double num3,double num4)
{
 cout<<num3<<" / "<<num4<<" = "<<num3/num4<<endl;
}

int main()
{
 calculator c;
 c.add(1,2);
 c.add(3.25,4.25);
 c.sub(4,1);
 c.sub(4.55,3.05);
 c.mul(3,7);
 c.mul(2.0,4.5);
 c.div(8,3);
 c.div(9.9,3.0);
 
return 0;
}
