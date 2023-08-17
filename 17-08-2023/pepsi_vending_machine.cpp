//pepsi vending machine.

#include<iostream>
using namespace std;
int main()
{
    int capacity=200,stock=15,n,i;
    char ch;
    do{
    cout<<"how many pepsi bottles you want :- ";
    cin>>n;
    if(n<=stock)
    {
        for(i=0;i<n;i++)
        {
            cout<<"\nTake it :)";
        }
        stock-=n;
        cout<<"\nHave a good drink\n";
    }
    else if(n>stock)
    {
        for(i=0;i<stock;i++)
        {
            cout<<"\nTake it :)";
        }
        n-=stock;
        stock=0;
        if(n!=0)
            cout<<"\nOut of stock...\n";
        cout<<"\nHave a good drink\n";
    }
    cout<<"Do you want to continue(y/n) :- ";
    cin>>ch;
    }while(ch=='y');
    return 0;
}
