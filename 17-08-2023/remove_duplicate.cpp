// removing duplicate elements in an array and printing the result.

#include<iostream>
using namespace std;

int main()
{
    int n,a[20],b[20],i,j,k;
    cout<<"enter array size :- ";
    cin>>n;
    cout<<"enter the array elements:-";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
               for(k=j;k<n;k++)
               {
                  a[k]=a[k+1];
               }
               j--;
               n--;
          }
      }
    }
    cout<<"printing result :- ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    
    return 0;
}
