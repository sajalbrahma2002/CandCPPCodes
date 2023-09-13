// Prims's Algorithm
// SAJAL BRAHMA - 21BPS1045

#include<limits.h>
#include<stdio.h>
#include<stdbool.h>

int adj_matrix[6][6],parent[6],key[6];
bool Min_Spanning_Tree[6];
int num;

void Prims_Algo(int adj[6][6]);
int Least_key_val(int key[],bool MST[]);
void display_Prims_MST(int parent[],int adj[6][6]);

void Prims_Algo(int adj[6][6])
{
	for(int i=0;i<6;i++)
	{
		key[i]=INT_MAX;
		Min_Spanning_Tree[i]=false;
	}
	key[0]=0;
	parent[0]=-1;
	for(int a=0;a<5;a++)
	{
		int k=Least_key_val(key,Min_Spanning_Tree);
		Min_Spanning_Tree[k]=true;
		
		for(int b=0;b<6;b++)
		{
			if(adj[k][b] && Min_Spanning_Tree[b]==false && adj[k][b]<key[b])
			{
				parent[b]=k;
				key[b]=adj[k][b];
			}
		}
	}
	printf("\nSpanning Tree for the given Graph :- \n");
	display_Prims_MST(parent,adj);
}

int Least_key_val(int key[],bool MST[])
{
	int least=INT_MAX;
	int min_index;
	for(int x=0;x<6;x++)
	{
		if(key[x]<least && MST[x]==false)
		{
			least=key[x];
			min_index=x;
		}
	}
	return min_index;
}

void display_Prims_MST(int parent[],int adj[6][6])
{
	printf("Edge\tDistance\n");
	for(int i=1;i<6;i++)
	{
		printf("%d - %d\t%d\n",parent[i]+1,i+1,adj[i][parent[i]]);
	}
}
int main()
{
	printf("Enter the number of vertices :- ");
	scanf("%d",&num);
	printf("\nEnter the distance between the vertices in the adjacency matrix [%d x %d] :- \n",num,num);
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			scanf("%d",&adj_matrix[i][j]);
		}
	}
	Prims_Algo(adj_matrix);
	return 0;
}

// 0 2 0 1 4 0
// 2 0 3 3 0 7
// 0 3 0 5 0 8
// 1 3 5 0 9 0
// 4 0 0 9 0 0
// 0 7 8 0 0 0

// Spanning Tree for the given Graph :-
// Edge    Distance
// 1 - 2   2
// 2 - 3   3
// 1 - 4   1
// 1 - 5   4
// 2 - 6   7

