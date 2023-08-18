//  missing smallest positive integer pgm

#include<iostream>
using namespace std;

int main()
{
    int small=1,count=0,i,a[20],n;
    cout<<"enter the number of elements :- ";
    cin>>n;
    cout<<"enter the numbers :- ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==small)
        {
            a[i]=0;
            i=-1;
            small+=1 ;
        }
    }
    if(small==1)
    {
            cout<<"\nmissing smallest positive integer is 1\n";
            goto end;
    }
    cout<<"missing smallest positive integer is "<<small;  
    end : return 0;
}
