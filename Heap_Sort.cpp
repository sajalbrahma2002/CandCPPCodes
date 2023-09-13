// Heap Sort
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

void Heapify(int arr[],int n,int i);
void Heap_sort(int arr[],int n);
void swap(int *x,int *y);
void Display(int arr[],int n);

void Heapify(int arr[],int n,int i)
{
	int largest=i;
	//for left child index of i
	int leftchild=(i*2)+1;
	//for right child index of i
	int rightchild=(i*2)+2;
	
	//if leftchild is greater than its root 
	if(leftchild<n && arr[leftchild]>arr[largest])
	largest=leftchild;
	
	//if righttchild is greater than its root 
	if(rightchild<n && arr[rightchild]>arr[largest])
	largest=rightchild;
	
	if(largest!=i)
	{
		swap(&arr[largest],&arr[i]);
		Heapify(arr,n,largest);
	}
}

void Heap_sort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		Heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--)
	{
		swap(&arr[0],&arr[i]);
		Heapify(arr,i,0);
	}
}

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void Display(int arr[],int n)
{
	printf("\nThe Sorted Array after heapify :- ");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
}

int main()
{
	int num;
	printf("Enter the number of elements to be added in the tree :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	Heap_sort(array,num);
	Display(array,num);
}

// Input -> 7 -> 15 5 20 1 17 10 30
// Output -> 1 5 10 15 17 20 30
