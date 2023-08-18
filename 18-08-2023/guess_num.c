// guessing number pgm

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int flag=0,rnd,guess,low,high;
    printf("enter the range :- ");
    scanf("%d%d",&low,&high);
    rnd = low + (rand() % (high-low));
    do{
        printf("\nplease guess the number :- ");
        scanf("%d",&guess);
        if(guess==rnd)
        {
            printf("the number is correct...\n");
            flag=1;
            break;
        }
        else if(guess>rnd)
        {
            printf("High\n");
        }
        else if(guess<rnd)
        {
            printf("Low\n");
        }
    }while(flag!=1);
    return 0;
}
