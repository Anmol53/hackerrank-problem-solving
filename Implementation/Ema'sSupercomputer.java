import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    static int twoPluses(String[] grid) {
        int n = grid.length;
        int m = grid[0].length();
        int maxArea1 = 0;
        int maxArea = 0;
        String[] tempGrid = new String[n];
        int DIS = 0;
        for(int i = 0; i < n; i++){
            tempGrid[i] = grid[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int area1 = 0;
                int r = i;
                int c = j;
                int dis = 0;
                int maxDis = Math.min(Math.min(r, n - r - 1),Math.min(c, m - c - 1));
                while(dis <= maxDis && grid[r - dis].charAt(c) == 'G' && grid[r].charAt(c - dis) == 'G' && grid[r].charAt(c + dis) == 'G' && grid[r + dis].charAt(c) == 'G'){
                    area1 = 1 + (dis * 4);
                    grid[r - dis] = grid[r - dis].substring(0, c) + "V" + grid[r - dis].substring(c + 1);
                    grid[r] = grid[r].substring(0, c - dis) + "V" + grid[r].substring(c - dis + 1);
                    grid[r] = grid[r].substring(0, c + dis) + "V" + grid[r].substring(c + dis + 1);
                    grid[r + dis] = grid[r + dis].substring(0, c) + "V" + grid[r + dis].substring(c + 1);
                    dis++;
                    int maxArea2 = 0;
                    for(int k = 0; k < n; k++){
                        for(int l = 0; l < m; l++){
                            int area2 = 0;
                            int rr = k;
                            int cc = l;
                            int dis2 = 0;
                            int maxDis2 = Math.min(Math.min(rr, n - rr - 1),Math.min(cc, m - cc - 1));
                            while(dis2 <= maxDis2 && grid[rr - dis2].charAt(cc) == 'G' && grid[rr].charAt(cc - dis2) == 'G' && grid[rr].charAt(cc + dis2) == 'G' && grid[rr + dis2].charAt(cc) == 'G'){
                                area2 = 1 + (dis2 * 4);
                                dis2++;
                            }
                            if(area2 > maxArea2){
                                maxArea2 = area2;
                            }
                        }
                    }
                    if(area1 * maxArea2 > maxArea){
                        maxArea = area1 * maxArea2;
                    }
                }
                for(int ii = 0; ii < n; ii++){
                    grid[ii] = tempGrid[ii];
                }
            }
        }
        return maxArea;
    }

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int m = sc.nextInt();
        String grid[] = new String[n];
        for(int i = 0; i < n; i++){
            grid[i] = sc.next();
        }
        int result = twoPluses(grid);
        System.out.println(result);
    }
}
