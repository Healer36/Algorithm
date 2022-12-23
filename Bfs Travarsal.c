#include<stdio.h>

void BFS(int);
int graph[10][10], visited[10],total;
int count=0;

void main()
{
	int i,j;
	printf("\nEnter the total number of vertices in graph\n");
	scanf("%d",&total);
	/*Adjacency matrix input*/
	printf("\nEnter the adjacency matrix\n");
	for(i=0;i<total;i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	for(i=0;i<total;i++)
	{
		visited[i] = 0;
	}

	printf("\nBFS traversal is \n");

	int start;
	printf("Enter the starting node");
	scanf("%d",&start);

	BFS(start);
	if(count<total){
        printf("Not all nodes are reachable");
	}
}


void BFS(int vertex)
{
	int j;
	printf("%d\t",vertex);
	count++;
	visited[vertex] = 1;
	for(j=0;j<total;j++)
	{
		if(!visited[j] && graph[vertex][j] == 1 )
		{
			BFS(j);
		}
	}
}
