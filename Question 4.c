//Write a program to print the first 10 odd natural numbers
#include<stdio.h>

int main()
{
    for(int i=1;i<=19;i++)
    {
        if(i%2==0)
            continue;
        else
            printf("%d ",i);

    }
    return 0;
}
