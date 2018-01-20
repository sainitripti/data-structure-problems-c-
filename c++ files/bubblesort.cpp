#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void bubblesort(int ar[],int n)
{
 int i,j;
 for(i=0;i<n-1;i++)
 { 
   for(j=0;j<n-1-i;j++)
   {
     if(ar[j]>ar[j+1])
       swap(&ar[j+1],&ar[j]);
   }
   
 }
}

void printarray(int ar[],int n)
{
 for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
}
int main(void)
{
 int ar[]={32,11,45,21,19};
 int n=sizeof(ar)/sizeof(ar[0]);

 cout<<"\n unsorted array: ";
 printarray(ar,n);
 bubblesort(ar,n);
 cout<<"\n sorted array: ";
 printarray(ar,n);
 cout<<"\n";

 return 0;
}
