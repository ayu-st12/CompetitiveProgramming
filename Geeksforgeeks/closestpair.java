Given two sorted arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.
We are given two arrays ar1[0…m-1] and ar2[0..n-1] and a number x, we need to find the pair ar1[i] + ar2[j] such that absolute value of (ar1[i] + ar2[j] – x) is minimum.

Example:

Input:  ar1[] = {1, 4, 5, 7};
        ar2[] = {10, 20, 30, 40};
        x = 32      
Output:  1 and 30

Input:  ar1[] = {1, 4, 5, 7};
        ar2[] = {10, 20, 30, 40};
        x = 50      
Output:  7 and 40

_________________________________________________

public class HelloWorld{

    void printClosest(int arr1[], int arr2[], int m, int n, int x) 
    { 
        int diff = Integer.MAX_VALUE;
        int l = 0, r = n-1,lf=0,rf=0;
        
        while(l<m && r>=0){
            if(Math.abs(arr1[l] + arr2[r] - x)<diff){
                lf = l;
                rf = r;
                diff = Math.abs(arr1[l] + arr2[r] - x);
            }
            
            if(arr1[l] + arr2[r] > x){
                r--;
            }else{
                l++;
            }
        }
        
        System.out.println(arr1[lf]+" "+arr2[rf]);
    } 

    public static void main(String args[]) 
    { 
        HelloWorld ob = new HelloWorld(); 
        int ar1[] = {1, 4, 5, 7}; 
        int ar2[] = {10, 20, 30, 40}; 
        int m = ar1.length; 
        int n = ar2.length; 
        int x = 38; 
        ob.printClosest(ar1, ar2, m, n, x); 
    }
}
