#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter n numbers : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+= (i*i);
    }
    printf("Sum of Squares : %d\n",sum);
    return 0;
}