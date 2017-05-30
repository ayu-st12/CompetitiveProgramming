#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s1=0,s2=0,r; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
   for(int a_i = 0; a_i < n; a_i++){
        s1 = s1 + a[a_i][a_i];
        s2 = s2 + a[a_i][n-a_i-1];
   }
    
    r = s1-s2;
    if(r<0)
        r *= -1;
    
    printf("%d",r);
    return 0;
}

