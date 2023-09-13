// Breadth First Search
// SAJAL BRAHMA - 21BPS1045
#include<stdio.h>

int adj_matrix[5][5],visited[5],queue[5];
int front=-1,rear=-1;
int num;

void Breadth_FS(int adj[][5],int visited[],int start_ver)
{
	for(int a=0;a<num;a++)
	{
		visited[a]=0;
	}
	queue[++rear]=start_ver;
	++front;
	visited[start_ver]=1;
	
	while(front<=rear)
	{
		start_ver=queue[front++];
		printf("%c -> ",start_ver+65);
		for(int i=0;i<5;i++)
		{
			if(adj[start_ver][i] && visited[i]==0)
			{
				queue[++rear]=i;
				visited[i]=1;
			}
		}
	}
}

int main()
{
	printf("Enter the number of vertices :- ");
	scanf("%d",&num);
	printf("Enter the details in the adjancncy matrix [%d x %d] :- \n",num,num);
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			scanf("%d",&adj_matrix[i][j]);
		}
	}
	printf("\nThe Breadth First Search is :- ");
	Breadth_FS(adj_matrix,visited,0);
	return 0;
}

// 0 1 0 1 0
// 1 0 1 1 0
// 0 1 0 0 1
// 1 1 0 0 1
// 0 0 1 1 0

// Output -> A -> B -> D -> C -> E
