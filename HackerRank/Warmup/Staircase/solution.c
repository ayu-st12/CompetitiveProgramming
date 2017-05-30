#include <stdio.h>

int main(){
    int n,i,j,k,l; 
    scanf("%d",&n);
    k=n;

    for(i=0;i<n;i++)
        {
        k = k-1;
        for(j=0;j<k;j++)
            {
            printf(" ");
        }
        for(l=k;l<n;l++)
            {
            printf("#");
        }
        printf("\n");
    }
    
}

