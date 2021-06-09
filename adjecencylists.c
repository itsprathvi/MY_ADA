#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,val;
    printf("Enter the total number of vertex : ");
    scanf("%d",&n);
    int** vertex = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the no of vertex connected to %d",i);
        scanf("%d",&m);
        vertex[i]=(int*)malloc((m+1)*sizeof(int));
        int j;
        for(j=0;j<m;j++){
            printf("Enter the vertex number connected to %d",i);
            scanf("%d",&val);
            vertex[i][j]=val;
        }
        vertex[i][j]=-1;
    }

    printf("Adjecency Matrix : \n");
    for(int i=0;i<n;i++){
        printf("vertex number %d = ",i+1);
        for(int j=0;vertex[i][j]!=-1;j++){
            printf("%d ",vertex[i][j]);
        }
        printf("\n");
    }
}
