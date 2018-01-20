#include<iostream>
using namespace std;

int reverse_int(int a){
    
    int reverse_a=0,remainder;
    
    while(a!=0){
     remainder=a%10;
     reverse_a=reverse_a*10+remainder;
     a=(a-remainder)/10;
    }
    cout<<reverse_a;
    return reverse_a;
}

int main(void)
{
int a;
cin>>a;
int b=reverse_int(a);
cout<<b;

return 0;
}
