// Depth First Search
// SAJAL BRAHMA - 21BPS1045
#include<stdio.h>

int adj_matrix[5][5],visited[5],stack[5];
int top=-1;
int num;

void Depth_FS(int adj[][5],int visited[],int start_ver)
{
	for(int a=0;a<num;a++)
	{
		visited[a]=0;
	}
	stack[++top]=start_ver;
	visited[start_ver]=1;
	while(top!=-1)
	{
		start_ver=stack[top--];
		printf("%c -> ",+start_ver+65);
		for(int i=0;i<5;i++)
		{
			if(adj[start_ver][i] && visited[i]==0)
			{
				stack[++top]=i;
				visited[i]=1;
				break;
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
	printf("\nThe Depth First Search is :- ");
	Depth_FS(adj_matrix,visited,0);
	return 0;
}

// 0 1 0 1 0
// 1 0 1 1 0
// 0 1 0 0 1
// 1 1 0 0 1
// 0 0 1 1 0

// Output -> A -> B -> C -> E -> D
