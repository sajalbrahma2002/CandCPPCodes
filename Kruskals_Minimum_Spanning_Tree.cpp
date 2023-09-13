// Kruskal's Algorithm
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct Edge
{
	int source;
	int dest;
	int dist;
};

void Kruskals_Algo(struct Edge **Input, int vertex ,int edge);
void sort(struct Edge **ptr,int edge);
int findParent(int x,int *parent);

void Kruskals_Algo(struct Edge **Input, int vertex ,int edge)
{
	sort(Input,edge);
	struct Edge *Output[edge-1];
	int Parent[vertex];
	for(int i=0;i<vertex;i++)
	{
		Parent[i]=i;
	}
	
	int count=0;
	int i=0;
	struct Edge *currentEdge=(struct Edge*)malloc(sizeof(struct Edge));
	while(count!=vertex-1)
	{
		currentEdge=Input[i];
		int sourceParent=findParent(currentEdge->source,Parent);
		int destParent=findParent(currentEdge->dest,Parent);
		if(sourceParent!=destParent)
		{
			Output[count]=(struct Edge*)malloc(sizeof(struct Edge));
			Output[count]=currentEdge;
			count++;
			Parent[sourceParent]=destParent;
		}
		i++;
	}
	printf("\nEdges\tdistance\n");
	for(int i=0;i<vertex-1;i++)
	{
		if(Output[i]->source<Output[i]->dest)
		{
			printf("%d - %d\t %d\n",Output[i]->source,Output[i]->dest,Output[i]->dist);
		}
		else
		{
			printf("%d - %d\t %d\n",Output[i]->dest,Output[i]->source,Output[i]->dist);
		}
		
	}
}

void sort(struct Edge **ptr,int edge)
{
	struct Edge *temp=(struct Edge*)malloc(sizeof(struct Edge));
	for(int i=0;i<edge-1;i++)
	{
		for(int j=0;j<edge-1-i;j++)
		{
			if(ptr[j]->dist>ptr[j+1]->dist)
			{
				temp->source=ptr[j]->source;
				temp->dest=ptr[j]->dest;
				temp->dist=ptr[j]->dist;
			    ptr[j]->source=ptr[j+1]->source;
				ptr[j]->dest=ptr[j+1]->dest;
				ptr[j]->dist=ptr[j+1]->dist;
				ptr[j+1]->source=temp->source;
				ptr[j+1]->dest=temp->dest;
				ptr[j+1]->dist=temp->dist;
			}
		}
	}
}

int findParent(int x,int *parent)
{
	if(parent[x]==x)
	return x;
	else
	return findParent(parent[x],parent);
}

int main()
{
	struct Edge *E[10];
	int vertex,edge;
	printf("Enter total number of vertices :- ");
	scanf("%d",&vertex);
	printf("\nEnter total number of edges :- ");
	scanf("%d",&edge);
	for(int i=0;i<edge;i++)
	{
	    E[i]=(struct Edge*)malloc(sizeof(struct Edge));
		printf("\nEdge %d ",i+1);
		printf("\nEnter source vertex :- ");
		scanf("%d",&E[i]->source);
		printf("\nEnter destination vertex :- ");
		scanf("%d",&E[i]->dest);
		printf("\nEnter distance between the two vertices :- ");
		scanf("%d",&E[i]->dist);
	}
	Kruskals_Algo(E,vertex,edge);
	return 0;
}

// vertices -> 6 , edges -> 9

// 1 2 2
// 1 4 1
// 1 5 4
// 2 3 3
// 2 4 3
// 2 6 7
// 3 4 5
// 3 6 8
// 4 5 9

// Output
// Edges   distance
// 1 - 4    1
// 1 - 2    2
// 2 - 3    3
// 1 - 5    4
// 2 - 6    7
