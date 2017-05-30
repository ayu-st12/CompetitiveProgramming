
#include<stdio.h>
#include<stdlib.h>

void insert();
void delet();
void display();
void search();
void sort();
void merge();

void binary();
void linear();

void bubble();
void selection();
void insertion();
void heap();
void merges();
void quick();

int arr[5] = {1,2,3};

int main()
{

int n;

while(1)
{
	printf("Enter any operation of your choice: ");
	printf("\n 1. Insertion");
	printf("\n 2. Deletion");
	printf("\n 3. Traversal");
	printf("\n 4. Searching");
	printf("\n 5. Sorting");
	printf("\n 6. Merging");
	printf("\n 7. Exit");

	printf("\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: insert(); break;
		case 2: delet(); break;
		case 3: display(arr); break;
		case 4: search(); break;
		case 5: sort(); break;
		case 6: merge(); break;
		case 7: exit(0);
	}
}

return 0;
}

int count()
	{
		int i;
		int n = sizeof arr/sizeof *arr;
		return n;
	}

void insert()
	{
		int i,data,k=0;
		int n = count();
		printf("Enter position: ");
		scanf("%d",&i);

		if(i > n || i < 0)
		{
			printf("Index out of boundary");
		}else{
	                printf("Enter data: ");
         	        scanf("%d",&data);

			for(k=n;k>i;k--)
			{
				arr[k-1]=arr[k-2];
			}

			arr[i-1]=data;
			printf("Data Inserted.\n");
		}
	}

void delet()
	{
		int i,k;
		int n = count();

		printf("Enter index you want to delete: ");
		scanf("%d",&i);

		if( i<0 || i>n )
		{
			printf("Out of Boundary\n");
		}else{
			for(k=i;k<n;k++)
			{
				arr[k-1]=arr[k];
			}
			printf("\nDeleted\n");
		}
	}

void display(int arr[])
	{
		int i;
		int n = count();
		for(i=0;i<n;i++)
		{
			printf(" %d ",arr[i]);
		}
		printf("\n");
	}

void linear()
	{
		int item,i;
		int n = count();
		printf("Enter item to search: ");
		scanf("%d",&item);

		for(i=0;i<n;i++)
		{
			if(arr[i] == item)
			{
				printf("Item Found at: %d", i+1);
			}
		}
	}

void binary(int start, int end)
	{
		int mid = (start + end)/2;
		printf("\n UNDER CONSTRUCTION  \n");
	}

void search()
	{
		int n1,n,s,e;
		printf("\n\nEnter the method you wanna apply:\n");
		printf("1. Linear Search");
		printf("2. Binary Search");
		scanf("%d", &n1);

		switch(n1)
		{
			case 1: linear(); break;
			case 2:	{ n = count(); s=0, e=n; binary(s,e); break; }
			default: printf("Please enter correct Option.");
		}
	}

void sort()
	{
		int i,n;

		printf("\n Enter method you wanna opt for sorting:\n");
		printf("\n 1. Bubble sort");
		printf("\n 2. Selection sort");
		printf("\n 3. Insertion sort");
		printf("\n 4. merge sort");
		printf("\n 5. quick sort");
		printf("\n 6. Heap sort");
		printf("\n\nEnter sorting method to apply:");

		scanf("%d",&i);
		switch(i)
		{
			case 1: bubble(arr); break;
			case 2: selection(); break;
			case 3: insertion(); break;
			case 4: merges(); break;
			case 5: quick(); break;
			case 6: heap(); break;
		}
	}

void merge()
	{
		printf("merge data");
	}

void bubble(int a[])
	{
		int i,j,n;
		int tmp;

		n = count();

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i] <= a[j])
				{
					tmp = a[i];
					a[i]= a[j];
					a[j]= tmp;
				}
			}
		}

		display(a);

		printf("\n");

		for(i=0;i<n;i++)
			printf(" %d ",a[i]);
 	}

void selection()
	{	printf("Selection Sort");	}

void quick()
	{	printf("Quick Sort");	}

void merges()
	{	printf("Merge Sort");	}

void heap()
	{	printf("Heap Sort");	}

void insertion()
	{	printf("Insertion sort");	}
