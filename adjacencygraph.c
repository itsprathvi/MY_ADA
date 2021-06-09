// Adjecency Matrix
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter the number of vertices : ");
	scanf("%d", &n);
	int graph[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				graph[i][j] = 0;
			}
			else if (i < j)
			{
				printf("Enter the distance between %d and %d", i + 1, j + 1);
				scanf("%d", &graph[i][j]);
				graph[j][i] = graph[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("\n[");
		for (int j = 0; j < n; j++)
		{
			printf("%d ", graph[i][j]);
		}
		printf("]\n");
	}
}