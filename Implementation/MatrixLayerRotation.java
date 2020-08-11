import java.util.*;

public class Solution {

    static long[] matrixRotation(long arr[], int r) {
        int len = arr.length;
        r %= len;
        long brr[] = new long[len];
        int x = len - r;
        for(int i = 0; i < x; i++){
            brr[i] = arr[i + r];
        }
        for(int i = x, j = 0; i < len; i++){
            brr[i] = arr[j];
            j++;
        }
        return brr;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int r = sc.nextInt();
        int x;
        if(m % 2 == 0 && n % 2 == 0){
            if(m < n){
                x = m / 2;
            }
            else{
                x = n / 2;
            }
        }
        else if(m % 2 == 0){
            x = m / 2;
        }
        else{
            x = n / 2;
        }
        long arr[][] = new long[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] = sc.nextLong();
            }
        }
        int a = 0;
        int b = 0;
        int c = m - 1;
        int d = n - 1;
        for(int i = 0; i < x; i++){
            long brr[] = new long[2 * (c + d - a - b)];
            int in = 0;
            for(int j = b; j < d; j++){
                brr[in] = arr[a][j];
                in++;
            }
            for(int j = a; j < c; j++){
                brr[in] = arr[j][d];
                in++;
            }
            for(int j = d; j > b; j--){
                brr[in] = arr[c][j];
                in++;
            }
            for(int j = c; j > a; j--){
                brr[in] = arr[j][b];
                in++;
            }
            brr = matrixRotation(brr, r);
            in = 0;
            for(int j = b; j < d; j++){
                arr[a][j] = brr[in];
                in++;
            }
            for(int j = a; j < c; j++){
                arr[j][d] = brr[in];
                in++;
            }
            for(int j = d; j > b; j--){
                arr[c][j] = brr[in];
                in++;
            }
            for(int j = c; j > a; j--){
                arr[j][b] = brr[in];
                in++;
            }
            a++;
            b++;
            c--;
            d--;
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        
    }
}
