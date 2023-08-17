//find diagonal,non diagonal,lower diagonal and upper diagonal elements from the matrix.

#include<iostream>
using namespace std;

int main()
{
    int r,c,a[20][20],b[20][20],i,j;
    cout<<"enter row size :- ";
    cin>>r;
    cout<<"enter col size :- ";
    cin>>c;
    cout<<"enter the matrix:-";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\ndiagonal elements :-\n ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                cout<<a[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    cout<<"\nnon diagonal elements :- \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                cout<<a[i][j]<<"\t"; 
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    cout<<"\nupper diagonal elements :-\n ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
                cout<<a[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    cout<<"\nlower diagonal elements :- \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                cout<<a[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    return 0;
}
