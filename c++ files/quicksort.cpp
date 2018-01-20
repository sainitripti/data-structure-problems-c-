#include<iostream>
using namespace std;
void swap(int *a,int *b);
int partition(int ar[],int l,int r);
void quicksort(int ar[],int l,int r);
void printarray(int ar[],int size);


int main(void)
{
 
 int ar[50],size;
cout<<"\n\tAlgorithm: Quick Sort\n";
cout<<"\n Enter size of array (less than 50): ";
cin>>size;
cout<<"\n Enter array elements: \n";
for(int i=0;i<size;i++)
 cin>>ar[i];
 cout<<"\n unsorted array: ";
 printarray(ar,size);
 quicksort(ar,0,size-1);
 cout<<"\n sorted array: ";
 printarray(ar,size);
 cout<<"\n";
 return 0;
}

void printarray(int ar[],int size)
{
 for(int i=0;i<size;i++)
  cout<<ar[i]<<" ";
}

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

int partition(int ar[],int l,int r)
{
  int pivot=ar[r];
  int i,j=l-1;
  for(i=l;i<r;i++)
  {
    if(ar[i]<=pivot){
     j++;
     swap(&ar[i],&ar[j]);
     }
     
  }

  swap(&ar[r],&ar[j+1]);

  return j+1;
}

void quicksort(int ar[],int l,int r)
{
 if(l<r)
 {
 int pi=partition(ar,l,r);
  quicksort(ar,l,pi-1);
  quicksort(ar,pi+1,r); 
 }
}
