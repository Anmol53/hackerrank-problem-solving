import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the isValid function below.
    static String isValid(String s) {
        Map<Character, Integer> hm = new HashMap<>();
        for(int i = 0; i < s.length(); i++){
            hm.put(s.charAt(i), hm.getOrDefault(s.charAt(i), 0) + 1);
        }
        Map<Integer, Integer> hm2 = new HashMap<>();
        for(char c : hm.keySet()){
            hm2.put(hm.get(c), hm2.getOrDefault(hm.get(c), 0) + 1);
        }
        if(hm2.size() > 2){
            return "NO";
        }
        if(hm2.size() < 2){
            return "YES";
        }
        int arr[] = new int[2];
        int i = 0;
        for(int x : hm2.keySet()){
            arr[i] = x;
            i++;
        }
        if(hm2.get(arr[0]) > 1 && hm2.get(arr[1]) > 1){
            return "NO";
        }
        if(hm2.get(arr[0]) == 1 && hm2.get(arr[1]) == 1){
            if(Math.abs(arr[0] - arr[1]) != 1){
                return "NO";                
            }
        }
        else if(hm2.get(arr[1]) == 1 && arr[1] - arr[0] != 1){
            return "NO";
        }
        return "YES";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = isValid(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
