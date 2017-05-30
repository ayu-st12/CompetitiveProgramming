#include<stdio.h>
#include<stdlib.h>

void insert();
void delet();
void display();

int arr[0];
int front = 0 , rear=0 , size;

int main()
{
	int n;

	printf("Enter size of array: ");
	scanf("%d",&size);
	arr[size];

	while(1)
	{
		printf("\n Choose any option: \n");
		printf("\n 1. Insert");
		printf("\n 2. Delete");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n");

		scanf("%d",&n);
		switch(n)
		{
			case 1: {insert();break;}
			case 2: {delet();break;}
			case 3: {display();break;}
			case 4: exit(0);
		}
	}
	return 0;
}

void insert()
	{
		int data;

		printf("Enter data: ");
		scanf("%d",&data);

		if(rear < size)
		{
			arr[rear++] = data;
		}else{
			printf("Queue is completely filled!");
		}
	}

void delet()
	{
		int d;
		d = arr[front++];
		printf("Data deleted: %d ",d);
	}

void display()
	{
		int i;
		if(front < rear)
		{
	                for(i=front;i<rear;i++)
	                {
        	                printf(" %d ",arr[i]);
                	}
		}
		else{
			printf(" \n Not initialized ");
		}
	}
