#include<stdio.h>
void main()
{
	int n,i=1,r=0;
	long int s=0;
	printf("Enter a Decimal digit: "); scanf("%d",&n);
    while(n!=0)
    {
    	r=n%2;
    	n=n/2;
    	s=s+(r*i);
    	i=i*10;
	}
	printf("%ld",s);
}
