#include<stdio.h>

int main()
{
int i = 10;
int k;
int *j;
int **a = &j;
int p,q,r;

a = &j;
k = **a;
j = *a;
printf("\n%d",j);
printf("\n%d",&j);
return 0;
}
