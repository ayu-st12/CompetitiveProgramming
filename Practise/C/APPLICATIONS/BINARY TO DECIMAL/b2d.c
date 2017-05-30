#include<stdio.h>
#include<math.h>
void main()
{
	int i=0,r=0;
	long int s=0,n;
	printf("Enter a Binary value: "); scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
    	n=n/10;
		s=s + (r*pow(2,i));
    	++i;
	}
	printf("%ld",s);
}
