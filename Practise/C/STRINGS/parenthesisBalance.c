#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char data;
	struct node *next;
};

void push(struct node** top_ref, int new_data)
	{
		struct node* new_n = (struct node *)malloc(sizeof(struct node));
		new_n->data = new_data;
		new_n->next = (*top_ref);
		(*top_ref) = new_n;
	}

char pop(struct node** top_ref)
	{
		char r;
		if(*top_ref == NULL)
		{
			printf("Overflow");
		}
		else{
			struct node *top;
			top = *top_ref;
			r = top -> data;
			*top_ref = top->next;
			free(top);
			return r;
		}
	}

int isMatchingPair(char charac1, char charac2)
	{
		if(charac1 == '(' && charac2==')')
			return 1;
		else
			return 0;
	}

int areParenthesisBalanced(char exp[])
	{
		int i=0;
		struct node *stack = NULL;
		while(exp[i])
		{
			if(exp[i] == '(')
				push(&stack,exp[i]);
			else if(exp[i] == ')'){
				if(stack == NULL)
					return 0;
				else if(!isMatchingPair(pop(&stack),exp[i]))
					return 0;
			}
		i++;
		}
		if(stack == NULL)
			{ return 1;}
		else
			return 0;
	}

int main()
{

	char exp[100];
	printf("Enter the parenthesis string: ");
	scanf("%s", exp);

	if(areParenthesisBalanced(exp))
		printf("\n Balanced \n");
	else
		printf("\n Not Balanced \n");
	return 0;
}
