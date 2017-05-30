#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node{
	int data;
	struct node *next;
};

struct node *top = NULL, *end, *tmp;

int main()
{

	int n;
	while(1)
	{
		printf("\n Choose any option:");
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n");

		scanf("%d",&n);

		switch(n)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3:	display(); break;
			case 4: exit(0);
		}
	}
	return 0;
}

void push()
{
	int item;
	printf("Enter item to add: ");
	scanf("%d",&item);

	if(top == NULL)
	{
		top = (struct node *)malloc(sizeof(struct node));
		top->data = item;
		top->next = NULL;
	}
	else{
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp->data = item;
		tmp->next = top;
		top = tmp;
	}
	printf("\n Data Inserted \n");
}

void pop()
{
	struct node *top1 = top;
	int d = top->data;
	top = top->next;
	free(top1);
	printf("\n Popped \n");
}

void display()
{
	struct node* tp = top;
	while(tp->next != NULL)
	{
		printf(" %d ", tp->data);
		tp = tp->next;
	}
	printf("%d",tp->data);
}
