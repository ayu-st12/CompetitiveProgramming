/*package whatever //do not write package name here */
/*


Who Will Win?
Submissions: 8549   Accuracy:

26.08%   Difficulty: Basic   Marks: 1




Gautam and Subhash are two brothers. They are similar to each other in all respects except one. They have different ways of searching. When Gautam has to search for an item from a lot, he goes through all the items one by one and stops when he finds the item. However Subhash has an entirely different and interesting way of searching. However the search works only for items which are sorted. He goes to the middle of the lot, if he finds the desired item, he stops, if not, he checks whether the middle item is smaller or larger than the required item. If larger, he repeats the same process for the first half of the lot, otherwise second half. One day, the two brothers sit in a contest in which they have to find a name out of a sorted dictionary. Whoever finds out the name first will win the contest. The audience is very eager to know who will win and hence they want you to predict.

Input:

The first line of input takes the number of test cases, T.

The next T lines take the total number of names N, followed by M the position of the name to be searched, as well as the amount of time taken for each observation by Gautam G and Subhash S.

Output:

Print 1 in case Gautam will win, 2 in case Subhash will win, 0 in case of a draw in a separate line.

Constraints:

1<=T<=100

1<=N<=1000

1<=M<=N

1<=G<=100

1<=S<=100

Example:

Input:

3
10 8 10 25
10 8 10 30
10 8 10 12

Output:

2
2
2

** For More Input/Output Examples Use 'Expected Output' option **



*/


import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws Exception{
		//code
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());

        while(testCase-- >0){
            String s[] = br.readLine().split("\\s+");
            int max = Integer.parseInt(s[0]); int key = Integer.parseInt(s[1]);
            int gautam_obtime = Integer.parseInt(s[2]); int saurabh_obtime = Integer.parseInt(s[3]);

            int gautam_score = key * gautam_obtime;
            int saurabh_score = 0;
            int min = 1,opt = 0;

            saurabh_score = get_saurabhScore(min,max,key,saurabh_obtime);
            if(gautam_score>saurabh_score){
                opt = 2;
            }
            if(gautam_score<saurabh_score){
                opt = 1;
            }
            if(gautam_score==saurabh_score){
                opt = 0;
            }

            System.out.println(opt);
        }
	}

	static int get_saurabhScore(int s, int e, int k, int ob){
	    int saurabh_score = 0,m=0;
	    while(s < e){
                saurabh_score += ob;
                m = (int)Math.floor((s+e)/2);
                if(m==k){
                    break;
                }
                if(k>m){s= m+1;}
                if(k<m){e= m-1;}
            }

	    return saurabh_score;
	}
}
