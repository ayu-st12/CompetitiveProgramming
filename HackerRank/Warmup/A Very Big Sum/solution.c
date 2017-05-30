#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int n,sum=0;
    scanf("%lld",&n);
    long long int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%lld",&arr[arr_i]);
        sum = sum + arr[arr_i];
    }
    printf("%lld",sum);
    return 0;
}

