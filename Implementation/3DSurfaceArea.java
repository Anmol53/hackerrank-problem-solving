import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the surfaceArea function below.
    static int surfaceArea(int[][] arr) {
        int n = arr.length;
        int m = arr[0].length;
        int v = 0;
        int totalCube = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                totalCube += arr[i][j];
                if(j != 0){
                    v += Math.min(arr[i][j - 1], arr[i][j]) * 2;
                }
                if(i != 0){
                    v += Math.min(arr[i - 1][j], arr[i][j]) * 2;
                }
            }
        }
        int vSA = totalCube * 4 - v;
        int hSA = m * n * 2;
        return vSA + hSA;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] HW = scanner.nextLine().split(" ");

        int H = Integer.parseInt(HW[0]);

        int W = Integer.parseInt(HW[1]);

        int[][] A = new int[H][W];

        for (int i = 0; i < H; i++) {
            String[] ARowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < W; j++) {
                int AItem = Integer.parseInt(ARowItems[j]);
                A[i][j] = AItem;
            }
        }

        int result = surfaceArea(A);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
