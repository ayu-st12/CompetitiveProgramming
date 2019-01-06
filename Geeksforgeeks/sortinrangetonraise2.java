Efficiently sorting numbers in range from 0 to n^2 - 1 Submissions: 762   Accuracy: 50.79%   Difficulty: Easy   Marks: 2
     
Given an array of numbers of size n. It is also given that the array elements are in range from 0 to n2 – 1. Sort the given array in linear time.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. The following line contains n space separated integers.

Output:
Sort the given array in linear time.

Constraints:
1<=T<=10^5
1<=n<=10^4
1<=a[i]<=(10^4)-1

Example:
Input:
2
7
40 12 45 32 33 1 22
5
24 12 0 15 8

Output:
1 12 22 32 33 40 45
0 8 12 15 24

_____________________________________________________________

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner in = new Scanner(System.in);
		int testCase = in.nextInt();
		
		while(testCase-- > 0){
		    int n = in.nextInt();
		    int arr[] = new int[n];
		    
		    for(int i= 0 ;i<n;i++){
		        arr[i]= in.nextInt();
		    }
		    
		    radixSort(arr);
		    System.out.println();
		}
	}
	
	static int getMax(int arr[],int n){
	    int mx = arr[0];
	    for(int i = 1 ; i<n ;i++){
	        if(arr[i]>mx){mx=arr[i];}
	    }
	    return mx;
	}
	
	static void countSort(int arr[],int n,int exp){
	    int output[] = new int[n];
	    int i=0;
	    int count[] = new int[10];
	    Arrays.fill(count,0);
	    
	    for(i = 0; i<n ;i++){
	        count[(arr[i]/exp)%10]++;
	    }
	    
	    for(i=1;i<10;i++){
	        count[i] += count[i-1];
	    }
	    
	    for(i=n-1;i>=0;i--){
	        output[count[(arr[i]/exp)%10]-1]=arr[i];
	        count[(arr[i]/exp)%10]--;
	    }
	    
	    for(i = 0; i< n ; i++){
	        arr[i]=output[i];
	    }
	}
	
	static void radixSort(int arr[]){
	    int m = getMax(arr,arr.length);
	    for(int exp = 1; m/exp>0 ; exp *= 10)
	        countSort(arr,arr.length,exp);
	        
	   	for(int i = 0; i< arr.length ; i++){
	        System.out.print(arr[i]+" ");
	    }     
	}
}
