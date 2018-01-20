#include<iostream>
using namespace std;

int main(void)
{

int decimal_num;

cout<<"\n Enter a decimal number: ";
cin>>decimal_num;
cout<<"\n";

int arr[20];
int i=0;
while(decimal_num>0)
{
arr[i]=decimal_num%2;
i++;
decimal_num=decimal_num/2;
}
cout<<"\n Binary equivalent of "<<decimal_num<<" is: ";
for(int j=i-1;j>=0;j--)
 cout<<arr[j];

cout<<endl;
cout<<"\n One's Complement of "<<decimal_num<<" is: ";

for(int j=i-1;j>=0;j--){
if(arr[j]==1)
 arr[j]=0;
else
 arr[j]=1;

cout<<arr[j];
}
cout<<"\n";
int j=0;
while(j<i)
{
if(arr[j]==0)
 {
  arr[j]=1;
  break;
 }

else{
  arr[j]=0;
  j++;
  }
}

cout<<"\n Two's Complement of "<<decimal_num<<" is: ";
for(int j=i-1;j>=0;j--)
 cout<<arr[j];

cout<<endl;

return 0;
}
