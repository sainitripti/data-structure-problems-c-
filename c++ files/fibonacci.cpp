#include<iostream>
using namespace std;

class fib
{
 int n;
 int term;
 public:
 void input();
 int fibonacci(int n);
 void output();
};

void fib::input()
{
 cout<<"\n Enter number of terms: ";
 cin>>n;
}

void fib::output()
{
 cout<<" Fibonacci series: ";
 for(int i=1;i<=n;i++)
 { 
  term=fibonacci(i);
  cout<<term<<" ";
 }
 cout<<endl;
}

int fib::fibonacci(int n)
{
 if(n==1)
  return 0;
 else if(n==2)
  return 1;
 else 
  return(fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
 fib f;
 f.input();
 f.output();
 return 0;
}

