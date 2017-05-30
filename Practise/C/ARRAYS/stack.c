#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void push();
void pop();
void SizeStack();
void display();

int arr[0],size;
static int top = 0;

int main()
{
	int n;
	while(1)
	{
		printf("\nEnter any choice: \n");
		printf("\n 0. Populate Stack");
		printf("\n 1. Push Operation");
		printf("\n 2. Pop Operation");
		printf("\n 3. Display");
		printf("\n 4. Exit");

		printf("\n");
		scanf(" %d",&n);
		switch(n)
		{
			case 0: SizeStack(); break;
			case 1: push(); break;
			case 2:	pop(); break;
			case 3: display(); break;
			case 4: exit(0);
		}
	}
	return 0;
}

void SizeStack()
	{
		int i;
		printf("Enter size of array: ");
		scanf("%d",&size);
		arr[size];
	}

void display()
	{
		printf("Current Stack is: ");
		int i;
		for(i=0;i<top;i++)
		{
			printf(" %d ", arr[i] );
		}
	}

void push()
	{
		int d;

		if(top>=size)
		{
			printf("Overflow");
		}
		else{
			printf("Enter data: ");
			scanf("%d",&d);
			arr[top++] = d;
		}
	}

void pop()
	{
		int d;
		if(top < 0)
			printf("Underflow");
		else{
			d = arr[top-1];
			top--;
			printf("Data Deleted: %d", d);
		}
	}
