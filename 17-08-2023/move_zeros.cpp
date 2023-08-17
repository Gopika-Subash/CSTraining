//moving all the zeros at the end of the array by maintaining relative positions

#include<iostream>
using namespace std;

int main()
{
    int n,a[20],b[20],i,j=0,count=0;
    cout<<"enter array size :- ";
    cin>>n;
    cout<<"enter the array elements:-";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"printing result :-\n";
    for(i=0;i<n;i++)
    {
      if(a[i]==0)
      {
          b[j++]=a[i];
          count+=1;
      }
      else
      {
          cout<<a[i]<<"\t";
      }
    }
    for(i=0;i<count;i++)
    {
        cout<<b[i]<<"\t";
    }
    return 0;
}
