#include<stdio.h>
#include<stdlib.h>

void insert();
void delet();
void display();

struct node
   {
	int item;
	struct node *next;
   };

struct node *start =NULL , *tmp = NULL, *end = NULL;

int main()
   {

	int n;
	while(1)
	{
		printf("\nchoose the opertaion: \n");
		printf("\n 1. Enter a value to add");
		printf("\n 2. Delete a value");
		printf("\n 3. Display list");
		printf("\n 4. Exit");

		printf("\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: insert(); break;
			case 2:	delet(); break;
			case 3:	display(); break;
			case 4:	exit(0);
			default: printf("\n Please choose correct Optiom \n");
		}
	}
	return 0;
   }

void insert()
{
	int data;
	printf("Enter data: ");
	scanf("%d",&data);

	if(start == NULL)
	{
	        struct node* new_node = (struct node *)malloc(sizeof(struct node));
        	new_node->item = data;
        	new_node->next = NULL;
        	start = new_node;
		tmp = start;
		end = new_node;
	}
	else{
	        while(tmp -> next != NULL)
        	{
                	tmp = tmp->next;
        	}

		struct node* new_node = (struct node *)malloc(sizeof(struct node));
        	new_node->item = data;
        	tmp->next = new_node;
        	new_node->next = NULL;
		end = new_node;
	}
	printf("Data Inserted!");
}

void dbyindex(int k)
{
	int i,j=1;

	if(k==0)
	{

	        printf("Enter index number from where item is to be deleted: ");
	        scanf("  %d",&i);

	}else{
		i = k;
	}

	struct node *p, *t;
	struct node *r;

	p = start;
	r = p;

	if(i==1)
	{
		t = p->next;
		start = t;
	}

	while(j!=i)
	{
		r = p;
		p = p->next;
		j++;
	}

	if(p->next == NULL)
	{
		r->next = NULL;
		free(p);
		printf("Deleted");
	}else{
		r->next = p->next;
		free(p);
		printf("Deleted");
	}

}

void dbyitem()
{
	int itm, n=0;

	printf("Enter the item you want to be deleted: ");
	scanf("%d",&itm);
	
	struct node *tmp = start;
	struct node *p = start;

	while(tmp->next!=NULL)
	{
		n++;
		if(tmp->item==itm)
		{	 dbyindex(n);	}
		else{
			tmp = tmp->next;
		}
	}

	if(end->item==itm)
	{
		n++;
		dbyindex(n);
	}

	printf("Item not Found! Please try again.");
}

void delet()
{
	int n;

	if(start!=NULL)
	{
		printf("\n\t Enter correct option:");
	        printf("\n\t 1. Delete by index");
        	printf("\n\t 2. Delete by item\n\n");
        	scanf("%d",&n);

	        switch(n)
        	{
                	case 1: dbyindex(0); break;
                	case 2: dbyitem(); break;
                	default: printf("Enter correct Option");
	        }
	}else
	{
		printf("List is Empty");
	}

}

void display()
{
	struct node * tmp;
	tmp = start;

	if(start == NULL)
	{
		printf("List not initialized!");
	}
	else if(start == end)
	{
		printf("%d", end->item);
	}
	else{

	        while(tmp -> next != NULL)
        	{
                	printf(" %d ", tmp->item);
                	tmp = tmp->next;
        	}
        	printf(" %d ", end->item);
	}
}
