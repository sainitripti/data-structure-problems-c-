#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void selectionsort(int ar[],int n)
{
 int i,j,min_index;
 for(i=0;i<n-1;i++)
 { 
   min_index=i;
   for(j=i+1;j<n;j++)
   {
     if(ar[j]<ar[min_index])
       min_index=j;
   }
   swap(&ar[min_index],&ar[i]);
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
 selectionsort(ar,n);
 cout<<"\n sorted array: ";
 printarray(ar,n);
 cout<<"\n";

 return 0;
}
