K closest elements Submissions: 2007   Accuracy: 16.65%   Difficulty: Easy   Marks: 2
     
Given a sorted array of numbers, value K and an index X in array, find the K closest numbers in position to X in array.

Example: Let array be 11 23 24 75 89, X be 24 and K be 2. Now we have to find K numbers closest to X that is 24. In this example, 23 and 75 are the closest 2 numbers to 24.

Note: K should be even and in cases with less than k/2 elements on left side or right side, we need to print other side elements. Like 2 4 5 6 7, X be 6 and K be 4 then answer is 2 4 5 7

 

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N input C[i].
The third line of each test case contains K and X.

Output:

Print K closest number in position to X in array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ C[i] ≤ 1000

Example:

Input
1
5
11 23 24 75 89
2 24

Output
23 75

________________________________________________________________



import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
       
	public static void main (String[] args) {
		//code
				Scanner input =new Scanner(System.in);
		int t= input.nextInt();
		int size,K,num,lowest=0;
		while(t!=0){
		    size = input.nextInt();
		    int arr[] =new int[size];
		    for(int i=0;i<size;i++){
		        arr[i]= input.nextInt();
		    }
		    K=input.nextInt();
		    num=input.nextInt();
		    
		    int array2[] = new int[K];
		    for(int i=0;i<size;i++){
		        if(num==arr[i]){
		            lowest = i-K/2;
		            if(i-K/2 < 0 || i==0){
		                lowest = 0;
		            }
		            if(i+K/2 > size-1 || i==size-1){
		                lowest = size-1-K;
		            }
		            for(int j=lowest,m=0;m<K;j++){
		                if(j!=i){
		                array2[m]=arr[j];
		                m++;
		                }
		            }
		        }
		    }
		    for(int i=0;i<K;i++){
		        System.out.print(array2[i]);
		        if(i!=K-1)
		            System.out.print(" ");
		    }
		    System.out.print("\n");
		    t--;
		}
	}
}
