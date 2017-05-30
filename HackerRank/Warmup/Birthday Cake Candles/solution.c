#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,c=0; int tmp = 0;
    scanf("%d",&n);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
        if(height[height_i]>tmp){
            tmp = height[height_i];
        }
    }
    
    for(int height_i = 0; height_i < n; height_i++){
        if(height[height_i]==tmp){
            c++;
        }
    }
    
    printf("%d",c);
    
    return 0;
}

