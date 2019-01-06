Wave Array Submissions: 17877   Accuracy: 38.81%   Difficulty: Easy   Marks: 2
              
Given a sorted array A of non-repeating integers without duplicates. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N depicting the size of square matrix and next line followed by the value of array.

Output:
Print the array into wave-like array.

Constraints:
1 ≤ T ≤ 130
1 ≤ N ≤ 106
0 ≤ A[i] ≤107

Example:
Input:
1
5
5 7 3 2 8
Output:
3 2 7 5 8

Explanation:
Testcase 1: Array elements after sorting it in wave form are 3, 2, 7, 5, 8.

_____________________________________
/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    static void heapify(int arr[], int n, int i) 
    { 
        int largest = i;  
        int l = 2*i + 1;  
        int r = 2*i + 2;  
  
        if (l < n && arr[l] > arr[largest]) 
            largest = l; 
  
        if (r < n && arr[r] > arr[largest]) 
            largest = r; 
  
        if (largest != i) 
        { 
            int swap = arr[i]; 
            arr[i] = arr[largest]; 
            arr[largest] = swap; 
  
            heapify(arr, n, largest); 
        } 
    }    
    
    static void heapSort(int arr[]){
        int n = arr.length;
        
        for(int i = n/2-1 ; i>=0 ; i--){heapify(arr,n,i);}
        
        for (int i=n-1; i>=0; i--) 
        { 
            int temp = arr[0]; 
            arr[0] = arr[i]; 
            arr[i] = temp; 
  
            heapify(arr, i, 0); 
        }
    }
    
	public static void main (String[] args) {
		//code
		Scanner in = new Scanner(System.in);
		int testCase = in.nextInt();
		
		while(testCase-- > 0){
		    int n = in.nextInt();
		    int arr[] = new int[n];
		    
		    for(int i=0;i<n;i++){
		        arr[i]=in.nextInt();
		    }

            heapSort(arr);
            
            for(int i=0;i<n-1;i=i+2){
		        int tmp = arr[i];
		        arr[i] = arr[i+1];
		        arr[i+1] = tmp;
		    }
            
            
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");
		    }
		    System.out.println();
		}
	}
}
