import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
        /*
         * Write your code here.
         */
        int hh = (10 * (s.charAt(0) - '0')) + (s.charAt(1) - '0');
        if(s.charAt(8) == 'P' && hh < 12){
            hh += 12;
        }
        else if(s.charAt(8) == 'A' && hh == 12){
            hh = 0;
        }
        return "" + (hh / 10) + (hh % 10) + s.substring(2, 8);
    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}
