#include<iostream>
using namespace std;

class factorial
{
 int fact;
 int num;

 public:

 factorial()
 {
  num=1;
  fact=1;
 }
 int calc(int num);
 void input();
 void output();
};

void factorial::input()
{
 cout<<"\n Enter number: ";
 cin>>num;
}

int factorial::calc(int num)
{
 if(num<0)
  return -1;

 else if(num==1||num==0)
  return 1;
 
 return (num*calc(num-1));
 
}

void factorial::output()
{
  fact=calc(num);
  cout<<"\n Factorial of "<<num<<"= "<<fact<<endl;
}

int main(void)
{
  factorial f;
  f.input();
  f.output();
  return 0;
}

