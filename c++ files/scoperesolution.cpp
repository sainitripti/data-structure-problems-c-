#include<iostream>
using namespace std;

class temp
{
 public:

 void print();
};

void temp::print()
{
 cout<<"\n Inside function print. Declared outside class. \n ";
}

int x=10;
int main(void)
{
 int x=5;
 cout<<"\n Global x: "<<::x;
 cout<<"\n Local x: "<<x;
 temp t;
 t.print();
 return 0;
}

