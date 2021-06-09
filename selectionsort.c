#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionsort(int a[],int size)
{
    int i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main()
{
    int n,i,d,swap;
    clock_t initial,final;
    printf("Enter total no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements : ");
    for(i=0;i<n;i++)
    {
        a[i]=rand();
        scanf("%d",&a[i]);
    }
    initial=clock();
    selectionsort(a,n);
    final=clock();
    printf("ARRAY AFTRE SELECTIONSORT : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nTotal time taken to Sort %d elemets : %e\n",n,difftime(final,initial));
    return 0;
}