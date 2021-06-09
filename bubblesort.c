#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubblesort(int a[],int size)
{
    int i,j,flag,temp;
    for(i=0;i<size-1;i++)
    {
        flag=0;
        for(j=0;j<size-1-i;j++)
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

int main()
{
    int a[100],n,i;
    clock_t initial,final;
    printf("Enter total no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        rand();
        scanf("%d",&a[i]);
    }
    printf("ARRAY BEFORE BUBBLESORT : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    initial = clock();
    bubblesort(a,n);
    final = clock();

    printf("ARRAY AFTER BUBBLESORT : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nTotal time taken to Sort %e\n",difftime(final,initial));
}