#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int a[],int);
int main()
{
    int n,c,d,swap;
    clock_t stime,etime;
    printf("Enter total no of elements\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d integers\n",n);
    for(c=0;c<n;c++)
    {
        array[c]=rand();
        scanf("%d",&array[c]);
    }
    stime=clock();
    bubblesort(array,n);
    etime=clock();
    printf("Sorted list in Ascending Order :\n ");
    for(c=0;c<n;c++)
    {
        printf("%d\t",array[c]);
    }
    printf("\nTotal time taken to Sort %d elemets : %e\n",n,difftime(etime,stime));
}

void bubblesort(int a[],int size)
{
    int i,j,flag,temp;
    for(i=0;i<size-1;i++)
    {
        flag=0;
        for(j=0;j<size-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}