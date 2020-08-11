import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the climbingLeaderboard function below.
    static ArrayList<Integer> climbingLeaderboard(ArrayList<Integer> al1, ArrayList<Integer> al2) {
        int sz1 = al1.size();
        int sz2 = al2.size();
        int i = sz1 - 1, j = 0;
        ArrayList<Integer> al3 = new ArrayList<Integer>();
        for(; (j < sz2) && (i >= 0); i--){
            if(al1.get(i) > al2.get(j)){
                al3.add(i + 2);
                i++;
                j++;
            }
            else if(al1.get(i) == al2.get(j)){
                al3.add(i + 1);
                i++;
                j++;
            }
        }
        while(j++ < sz2){
            al3.add(1);
        }
        return al3;
    }
    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int scoresCount = sc.nextInt();
        TreeSet<Integer> ts = new TreeSet<Integer>();
        for (int i = 0; i < scoresCount; i++) {
            int scoresItem = sc.nextInt();
            ts.add(scoresItem);
        }
        ArrayList<Integer> al1 = new ArrayList<Integer>(ts);
        Collections.reverse(al1);
        ArrayList<Integer> al2 = new ArrayList<Integer>();
        ArrayList<Integer> al3 = new ArrayList<Integer>();
        int aliceCount = sc.nextInt();
        for (int i = 0; i < aliceCount; i++) {
            int aliceItem = sc.nextInt();
            al2.add(aliceItem);
        }
        al3 = climbingLeaderboard(al1,al2);
        for (int i = 0; i < aliceCount; i++) {
            System.out.println(al3.get(i));
        }
        sc.close();
    }
}
