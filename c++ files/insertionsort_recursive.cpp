#include<iostream>
using namespace std;

void printarray(int ar[],int n)
{
 for(int i=0;i<n;i++)
   cout<<ar[i]<<" ";
}

void insertionsort(int ar[],int n)
{
   if(n<=1)
    return;
   
   insertionsort(ar,n-1);
   
   int last=ar[n-1];
   int j=n-2;
 
   while(j>=0&&ar[j]>last)
   { 
     ar[j+1]=ar[j];
     j=j-1;
   }
   ar[j+1]=last;
}

int main(void)
{
 int ar[]={32,11,45,21,19};
 int n=sizeof(ar)/sizeof(ar[0]);
 
 cout<<"\n unsorted array: ";
 printarray(ar,n);
 insertionsort(ar,n);
 cout<<"\n sorted array: ";
 printarray(ar,n);
 cout<<"\n";
 return 0;
}
