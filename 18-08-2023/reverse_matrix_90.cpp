// reversing the matrix by 90 degree and print the result

#include<iostream>

using namespace std;

int main()
{
    int r,c,a[20][20],i,j;
    cout<<"enter row size :- ";
    cin>>r;
    cout<<"enter col size :- ";
    cin>>c;
    cout<<"enter matrix elements :- ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nafter reversing by 90 degree :- \n";
    for(i=0;i<c;i++)
    {
        for(j=r-1;j>=0;j--)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<"\n";
    }
}
