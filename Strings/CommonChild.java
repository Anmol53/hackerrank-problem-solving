/*
*
* @author : Anmol Agrawal
*
*/
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution { 
   
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        int n = s1.length();
        n++;
        int arr[][] = new int[n][n];
        Arrays.fill(arr[0], 0);
        for(int i = 0; i < n; i++){
            arr[i][0] = 0;
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                if(s1.charAt(i-1) != s2.charAt(j-1)){
                    arr[i][j] = Math.max(arr[i][j-1], arr[i-1][j]);
                }
                else{
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
            }
        }
        System.out.println(arr[n - 1][n - 1]);
    } 
}
