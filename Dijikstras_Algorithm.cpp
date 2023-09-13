// Dijikstras Algorithm
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int adj_matrix[6][6];
int vertex;

void Dijikstras_Algo(int adj[][6],int num,int start)
{
	int cost[10][10],dist[10],pred[10],visited[10];
	int count,min_dist,next_ver;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(adj[i][j]==0)
			{
				cost[i][j]=999;
			}
			else
			{
				cost[i][j]=adj[i][j];
			}
		}
	}
	for(int i=0;i<num;i++)
	{
		dist[i]=cost[start][i];
		pred[i]=start;
		visited[i]=0;
	}
	dist[start]=0;
	visited[start]=1;
	count=1;
	while(count<num-1)
	{
		min_dist=999;
		for(int i=0;i<num;i++)
		{
			if(dist[i]<min_dist && visited[i]==0)
			{
				min_dist=dist[i];
				next_ver=i;
			}
		}
		visited[next_ver]=1;
		for(int i=0;i<num;i++)
		{
			if(visited[i]==0)
			{
				if(min_dist+cost[next_ver][i]<dist[i])
				{
					dist[i]=min_dist+cost[next_ver][i];
					pred[i]=next_ver;
				}
			}
		}
		count++;
	}
	for(int i=0;i<num;i++)
	{
		if(i!=start)
		{
			printf("\nDistance of node %d = %d",i+1,dist[i]);
			printf("\nPath = %d",i+1);
			int j=i;
			do
			{
				j=pred[j];
				printf(" <- %d",j+1);
			}while(j!=start);
		}
	}
}

int main()
{
	int start_ver;
	printf("Enter the number of vertices :- ");
	scanf("%d",&vertex);
	printf("\nEnter the details in the adjacency matrix [%d x %d] :- \n",vertex,vertex);
	for(int i=0;i<vertex;i++)
	{
		for(int j=0;j<vertex;j++)
		{
			scanf("%d",&adj_matrix[i][j]);
		}
	}
	printf("\nEnter starting vertex :- ");
	scanf("%d",&start_ver);
	Dijikstras_Algo(adj_matrix,vertex,start_ver-1);
	return 0;
}

// Enter the number of vertices :- 6

// Enter the details in the adjacency matrix [6 x 6] :-
// 0 2 0 1 4 0
// 2 0 3 3 0 7
// 0 3 0 5 0 8
// 1 3 5 0 9 0
// 4 0 0 9 0 0
// 0 7 8 0 0 0

// Enter starting vertex :- 1

// Distance of node 2 = 2
// Path = 2 <- 1
// Distance of node 3 = 5
// Path = 3 <- 2 <- 1
// Distance of node 4 = 1
// Path = 4 <- 1
// Distance of node 5 = 4
// Path = 5 <- 1
// Distance of node 6 = 9
// Path = 6 <- 2 <- 1
