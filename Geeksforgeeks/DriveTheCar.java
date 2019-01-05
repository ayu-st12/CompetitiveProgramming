Drive the car Submissions: 2692   Accuracy: 52.55%   Difficulty: Easy   Marks: 2
     
Suppose you are car driver and you have to drive a car on a track divided into "N" number of sub-tracks. You are also given the value of "K" i.e. the total kilometers the car can drive on each sub-track. If the car can't cover a sub-track, you can add any unit of Petrol in it. With each unit of petrol added, the total kilometers your car can travel will increase by one unit .

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two lines of input. The first line contains two space separated integers N and K. The second line contains N space separated integers (A[])  denoting the distance of each N sub-tracks.

Output:
For each test case, you have to print out the minimum unit of Petrol your car requires to cover all the sub-tracks. If no extra unit of petrol is required, print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= K <= 1018
1 <= A[] <= 1018

Example:
Input:
2
5 7
2 5 4 5 2
5 4
1 6 3 5 2
Output:
-1
2

Explanation:
Testcase 2: You are given 5 sub-tracks with different kilometers. Your car can travel 4 km on each sub-track. So, when you come on sub-track 2nd you have to cover 6 km of distance, so you need to have 2 unit of petrol more to cover the distance, for 3rd sub-track, now your car can travel 6 kilometers, so no problem and so on.

_______________________


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
		    int totalTracks = in.nextInt();
		    int trackDistance = in.nextInt();
		    int petrolUnit = 0; 
		    
		    for(int i = 0; i < totalTracks; i++){
		        int lenTrack = in.nextInt();
		        if(lenTrack>trackDistance){
		            int diff = lenTrack - trackDistance;
		            trackDistance = trackDistance + diff;
		        	petrolUnit += diff;
		        }
		        
		    }
		    
		    if(petrolUnit==0){
		        System.out.println(-1);
		    }else{
		        System.out.println(petrolUnit);
		    }
		}
	}
}
