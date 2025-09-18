//Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>
void main()
{
    int n,t=0;
    printf("Enter the limit of n: \n");
    scanf("%d\n", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                t++;
                break;
            }
        }
        if(t==0)
        printf("%d ", i);
    }
}