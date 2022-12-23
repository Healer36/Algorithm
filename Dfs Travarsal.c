#include <stdio.h>

void DFS(int);
int graph[10][10], visited[10],total;
int count=0;

static int k = -1;
int arr[10];


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
	int start;
	printf("Enter the starting node : ");
	scanf("%d",&start);

	printf("\nBFS traversal is \n");

	DFS(start);

	if(count<total){
        printf("Not all nodes are reachable");
	}
}


void DFS(int vertex){
    int j,c;
    printf("%d\t",vertex);
    count++;
    visited[vertex]=1;

    for(j=0;j,j<total;j++){
        if(!visited[j] && graph[vertex][j]==1){
            arr[++k] = j; //because of stack (Lifo)
            c=1; ///adjacent vertex present
        }
        if(count == total){
            exit(0);
        }
    }

    if(c==1){
        DFS(arr[k]);
    }else{
        //adjacent vertex not present
        k--; //going back previous node
        DFS(arr[k]);
    }


}
