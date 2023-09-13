// PAT 3 - Trees
// SAJAL BRAHMA 

#include<stdio.h>

int adj_matrix[4][4];
int num;

void path(int adj[][4],int s,int d)
{
	int start=s;
	printf("\nPaths :- ");
	for(int i=0;i<num;i++)
	{
		if(adj[start][i])
		{
			if(i==d)
			{
				printf("\n%d -> %d ",start,i);
			}
			else
			{
				for(int j=0;j<num;j++)
				{
					if(adj[i][j])
					{
						if(j==d)
						{
							printf("\n%d -> %d -> %d",start,i,j);
						}
						else
						{
							for(int k=0;k<num;k++)
							{
								if(adj[j][k])
								{
									if(k==d)
									{
										printf("\n%d -> %d -> %d -> %d",start,i,j,k);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int main()
{
	int source,dest;
	printf("Enter the number of vertices in the tree :- ");
	scanf("%d",&num);
	printf("\nEnter the graph details in the adjacency matrix :- \n");
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			scanf("%d",&adj_matrix[i][j]);
		}
	}
	printf("\nEnter source node :- ");
	scanf("%d",&source);
	printf("\nEnter destination node :- ");
	scanf("%d",&dest);
	path(adj_matrix,source,dest);
	return 0;
}

// Enter the number of vertices in the tree :- 4

// Enter the graph details in the adjacency matrix :-
// 0 1 1 1
// 0 0 0 1
// 1 1 0 0
// 0 0 0 0

// Enter source node :- 2

// Enter destination node :- 3

// 2 -> 0 -> 1 -> 3
// 2 -> 0 -> 3
// 2 -> 1 -> 3
