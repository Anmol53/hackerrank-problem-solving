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

    public static String sortString(String inputString){
        char tempArray[] = inputString.toCharArray();
        Arrays.sort(tempArray);
        return new String(tempArray);
    }


    static ArrayList<String> subStrings(char str[], int n) {
        ArrayList<String> al = new ArrayList<String>();
        for (int len = 1; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) { 
                int j = i + len - 1; 
                String st = "";
                for (int k = i; k <= j; k++) { 
                    st = st + str[k];
                }
                al.add(st);
            } 
        } 
        return al;
    }

    // Complete the sherlockAndAnagrams function below.
    static int sherlockAndAnagrams(String s) {
        ArrayList<String> al = new ArrayList<String>();
        int len = s.length();
        al = subStrings(s.toCharArray(), len);
        int sz = al.size();
        int count = 0;
        for(int i = 0; i < sz; i++){
            for(int j = i + 1; j < sz; j++){
                String x = al.get(i);
                x = sortString(x);
                String y = al.get(j);
                y = sortString(y);
                if(x.length() != y.length()){
                    break;
                }
                if(x.equals(y)){
                    count++;
                }
            }
        }
        return count;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s = scanner.nextLine();

            int result = sherlockAndAnagrams(s);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
