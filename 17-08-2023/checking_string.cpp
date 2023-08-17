// check weather the string is balanced or not.

#include<iostream>
#include<string.h>

using namespace std;

char a[20],b[20],top=-1,s;
char open[3]={'[','{','('};
char close[3]={']','}',')'};
int empty=1,i,j,count=0;

void push(char s)
{
    ++top;
    b[top]=s;
}

void pop()
{
    s=b[top];
    top--;
}

int main()
{
    cout<<"enter the string :- ";
    cin>>a;
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='{'||a[i]=='['||a[i]=='(')
        {
            empty=0;
            push(a[i]);
            count+=1;
        }
        else if(a[i]=='}'||a[i]==']'||a[i]==')')
        {
            pop();
            for(j=0;j<3;j++)
            {
                if(close[j]==a[i])
                {
                    if(open[j]==s)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"string is unbalanced.\n";
                        goto end;
                    }
                }
            }
        }
    }
    if(top==-1)
    {
        cout<<"string is balanced.\n";
    }
    end : return 0;
}
