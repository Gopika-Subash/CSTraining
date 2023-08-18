// find the first peak element in an array using linear search

#include<iostream>

using namespace std;

int main()
{
    int a[20],n,i;
    cout<<"enter array size :- ";
    cin>>n;
    cout<<"enter the array elements :- ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if((i==0||a[i-1]<a[i])&&(i==n-1||a[i]>a[i+1]))
        {
            cout<<a[i]<<" is the first peak element which is at index value "<<i;
            break;
        }
    }
    if(i==n)
    {
        cout<<"no peak element found...\n";
    }
}

