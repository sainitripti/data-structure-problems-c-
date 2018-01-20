#include<iostream>
using namespace std;

void swap(int *a,int *b)
{ 
  int temp=*a;
  *a=*b;
  *b=temp;
}

int partition(int ar[],int l,int r)
{
  int pivot=ar[r];
  int i=l-1;
  for(int j=l;j<r;j++)
  {
    if(ar[j]<pivot)
    { 
     i++;
     swap(&ar[j],&ar[i]);
    }
   }
  swap(&ar[i+1],&ar[r]);
 return i+1;
}

void partitionsort(int ar[],int l,int r)
{
 int index;
 if(l<r)
 {
  index=partition(ar,l,r);
  partitionsort(ar,l,index-1);
  partitionsort(ar,index+1,r);

 }
}

void printarray(int ar[],int size)
{
 for(int i=0;i<size;i++)
  cout<<ar[i]<<" ";
}
 
int main(void)
{
 
 int ar[]={32,11,45,21,19};
 int size=sizeof(ar)/sizeof(ar[0]);
 
 cout<<"\n unsorted array: ";
 printarray(ar,size);
 partitionsort(ar,0,size-1);
 cout<<"\n sorted array: ";
 printarray(ar,size);
 cout<<"\n";
 return 0;
}
