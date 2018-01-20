#include<iostream>
using namespace std;

void merge(int ar[],int l,int m,int r)
{
  int i,j,k;
  int n1=m-l+1;
  int n2=r-m;
  int L[n1],R[n2];

  for(i=0;i<n1;i++)
   L[i]=ar[l+i];

  for(j=0;j<n2;j++)
   R[j]=ar[m+1+j];

  i=0,j=0,k=l;

  while(i!=n1&&j!=n2)
  {
    if(L[i]<=R[j])
    { 
      ar[k]=L[i];
      i++;
    }
    else
    {
      ar[k]=R[j];
      j++;
    }
    k++;
   }
 
  while(i<n1)
  {
    ar[k]=L[i];
    k++;
    i++;
  }
 
  while(j<n2)
  {
    ar[k]=R[j];
    k++;
    j++;
  }
}
  
void mergesort(int ar[],int l,int r)
{
  if(l<r)
  {
    int m=l+(r-l)/2;
    mergesort(ar,l,m);
    mergesort(ar,m+1,r);
    merge(ar,l,m,r);
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
 mergesort(ar,0,size-1);
 cout<<"\n sorted array: ";
 printarray(ar,size);
 cout<<"\n";
 return 0;
}
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

