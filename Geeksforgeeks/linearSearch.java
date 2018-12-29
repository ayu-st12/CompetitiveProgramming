/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws Exception {
		//code
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int testCase = Integer.parseInt(br.readLine());

	    while(testCase-- > 0){
	        String s[] = br.readLine().split("\\s+");
	        int n = Integer.parseInt(s[0]);
	        String k = s[1];

          //  "\\s+" -  matches sequence of one or more whitespace characters.
          //  "\\s"  - matches single whitespace character.
	        s = br.readLine().split("\\s+");
	        int idx = -1;

	        for(int i=0;i<n;i++){
	            if(s[i].equals(k)){
	                idx = i + 1;
	                break;
	            }
	        }

	        System.out.println(idx);
	    }

	}
}
