/*
*
* @author : Anmol Agrawal
*
*/
import java.util.*;

public class Solution {
    static void regionX(int[][] matrix, int n, int m, int i, int j){
        if(matrix[i][j] == 1){
            matrix[i][j] = 2;
            if(i < 0 || j < 0){}
            else if( i == 0 && j == 0){
                regionX(matrix, n, m, i + 1, j);
                regionX(matrix, n, m, i + 1, j + 1);
                regionX(matrix, n, m, i, j + 1);
            }
            else if( i == 0 && j == m - 1){
                regionX(matrix, n, m, i, j - 1);
                regionX(matrix, n, m, i + 1, j - 1);
                regionX(matrix, n, m, i + 1, j);
            }
            else if( i == n - 1 && j == 0){
                regionX(matrix, n, m, i - 1, j);
                regionX(matrix, n, m, i - 1, j + 1);
                regionX(matrix, n, m, i, j + 1);
            }
            else if( i == n - 1 && j == m - 1){
                regionX(matrix, n, m, i - 1, j - 1);
                regionX(matrix, n, m, i - 1, j);
                regionX(matrix, n, m, i, j - 1);
            }
            else if( i == (n - 1) ){
                regionX(matrix, n, m, i, j - 1);
                regionX(matrix, n, m, i, j + 1);
                regionX(matrix, n, m, i - 1, j + 1);
                regionX(matrix, n, m, i - 1, j - 1);
                regionX(matrix, n, m, i - 1, j);
            }
            else if(j == (m - 1)){
                regionX(matrix, n, m, i - 1, j - 1);
                regionX(matrix, n, m, i, j - 1);
                regionX(matrix, n, m, i + 1, j - 1);
                regionX(matrix, n, m, i - 1, j);
                regionX(matrix, n, m, i + 1, j);
            }
            else if(i == 0){
                regionX(matrix, n, m, i, j - 1);
                regionX(matrix, n, m, i, j + 1);
                regionX(matrix, n, m, i + 1, j - 1);
                regionX(matrix, n, m, i + 1, j);
                regionX(matrix, n, m, i + 1, j + 1);
            }
            else if(j == 0){
                regionX(matrix, n, m, i - 1, j);
                regionX(matrix, n, m, i + 1, j);
                regionX(matrix, n, m, i - 1, j + 1);
                regionX(matrix, n, m, i, j + 1);
                regionX(matrix, n, m, i + 1, j + 1);
            }
            else{
                regionX(matrix, n, m, i - 1, j - 1);
                regionX(matrix, n, m, i - 1, j);
                regionX(matrix, n, m, i - 1, j + 1);
                regionX(matrix, n, m, i, j - 1);
                regionX(matrix, n, m, i, j + 1);
                regionX(matrix, n, m, i + 1, j - 1);
                regionX(matrix, n, m, i + 1, j);
                regionX(matrix, n, m, i + 1, j + 1);
            }
        }
    }
    static int Scan(int[][] matrix, int n, int m){
        int i, j, k, l, count = 0, count1 = 0;
        for(i = 0; i < n-1; i++){
            for(j = 0; j < m-1; j++){
                if(matrix[i][j] == 1)
                {
                    regionX(matrix,n,m,i,j);
                    count = 0;
                    for(k = 0; k < n; k++){
                        for(l = 0; l < m; l++){
                            if(matrix[k][l] == 2){
                                count++;
                                matrix[k][l] = 3;
                            }
                        }
                    }
                    if(count > count1){
                        count1 = count;
                    }
                }
            }
        }
        return count1;
    } 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int m = sc.nextInt();
        sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int[][] matrix = new int[n][m];
        for (int i = 0; i < n; i++) {
            String[] matrixRowItems = sc.nextLine().split(" ");
            sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
            for (int j = 0; j < m; j++) {
                int matrixItem = Integer.parseInt(matrixRowItems[j]);
                matrix[i][j] = matrixItem;
            }
        }
        System.out.println(Scan(matrix,n,m));
    }
}
