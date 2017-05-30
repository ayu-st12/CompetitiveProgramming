#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int l1 = a+b+c+d;
    long int l2 = b+c+d+e;
    long int l3 = a+c+d+e;
    long int l4 = a+b+d+e;
    long int l5 = a+b+c+e;
    
    if(l1<=l2 && l1<=l3 && l1<=l4 && l1<=l5)
        printf("%lld ",l1);
    
    else if(l2<=l1 && l2<=l3 && l2<=l4 && l2<=l5)
        printf("%lld ",l2);
    
    else if(l3<=l2 && l3<=l1 && l3<=l4 && l3<=l5)
        printf("%lld ",l3);
    
    else if(l4<=l2 && l4<=l3 && l4<=l1 && l4<=l5)
        printf("%lld ",l4);

    else if(l5<=l2 && l5<=l3 && l5<=l4 && l5<=l1)
        printf("%lld ",l5);
    
    if(l1>=l2 && l1>=l3 && l1>=l4 && l1>=l5)
        printf("%lld",l1);
 
    else if(l2>=l1 && l2>=l3 && l2>=l4 && l2>=l5)
        printf("%lld",l2);    

    else if(l3>=l2 && l3>=l1 && l3>=l4 && l3>=l5)
        printf("%lld",l3);    
 
    else if(l4>=l2 && l4>=l3 && l4>=l1 && l4>=l5)
        printf("%lld",l4);    

    else if(l5>=l2 && l5>=l3 && l5>=l4 && l5>=l1)
        printf("%lld",l5);    
    
    return 0;
}

