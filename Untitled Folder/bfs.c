#include<stdio.h>
int v,i,j,graph[10][10],visited[10],rear,front,queue[10];
void bfs(int x)
{
	for(i=0;i<v;i++)
	{
		if(!visited[i] && graph[x][i]==1)
		{
			rear++;
			queue[rear]=i;
			visited[i]=1;
			printf("%d\t",i);
		}
	}

	front++;
	if(front<=rear)
	{
		bfs(queue[front]);
	}

}
void main()
{
	int s;
	printf("ENTER THE NUMBER OF VERTICES\n");
	scanf("%d",&v);
	printf("ENTER THE ADJACENCY MATRIX\n");
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}

	for(i=0;i<v;i++)
	{
		visited[i]=0;
	}

	printf("ENTER A STARTING ELEMENT\n");
	scanf("%d",&s);
	rear=front=0;
	queue[rear]=s;
	visited[s]=1;
	printf("THE BREADTH FIRST SEARCH OF CORRESPONDING GRAPH IS\n");
	printf("%d\t",s);
	bfs(s);
	printf("\n");
}
