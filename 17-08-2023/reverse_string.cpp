// reverse the string, eliminate duplicates and print the result.

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int len=0,j=0,i,k;
    char buf[50],buf1[50];
    cout<<"enter the string :- ";
    cin>>buf;
    for(i=0;buf[i]!='\0';i++)
    {
        len+=1;
    }
    for(i=len-1;i>=0;i--)
    {
        buf1[j++]=buf[i];
    }
    buf1[j]='\0';
    for(i=0;buf1[i]!='\0';i++)
    {
        for(j=i+1;buf1[j]!='\0';j++)
        {
            if(buf1[i]==buf1[j])
            {
                for(k=j;k<len;k++)
                {
                    buf1[k]=buf1[k+1];
                }
                len--;
            }
        }
    }
    cout<<"after reversing and eliminating duplicate :- "<< buf1;
    return 0;
}
