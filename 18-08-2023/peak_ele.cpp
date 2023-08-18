// find the first peak element in an array using binary search

#include<iostream>

using namespace std;

int main()
{
    int a[20],n,low=0,high,mid,i;
    cout<<"enter array size :- ";
    cin>>n;
    high=n-1;
    cout<<"enter the array elements :- ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    while(low<=high)
    {
        mid=(low+high)/2;
        if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid]))
        {
            cout<<a[mid]<<" is the peak element at index value "<<mid;
            break;
        }
        else if(mid>0 && a[mid-1]>a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        cout<<"no peak element found...\n";
    }
}
