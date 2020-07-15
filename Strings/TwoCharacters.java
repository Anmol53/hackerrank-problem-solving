/*
*
* @author : Anmol Agrawal
*
*/
import java.util.Scanner;
class Solution {
    public static void main(String args[]) {
        int n, max = 0;
        String str, alpha ="";
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        str = in.next();
        for(int i = 0; i < str.length(); i++) {
            char a = str.charAt(i);
            if( alpha.indexOf(a) == -1)
                alpha = alpha + a;
        }
        for(int i = 0; i < (alpha.length() - 1); i++) {
            for(int j = i+1; j < alpha.length(); j++) {
                char a = alpha.charAt(i);
                char b = alpha.charAt(j);
                String temp = "";
                int k;
                for(k = 0; k < str.length(); k++) {
                    if(str.charAt(k) == a || str.charAt(k) == b)
                        temp += str.charAt(k);
                }
                char c = '0';
                for(k = 0; k < temp.length(); k++) {
                    if(temp.charAt(k) == c)
                        break;
                    else
                        c = temp.charAt(k);
                }
                if(k == temp.length() && temp.length() > max)
                    max = temp.length();
            }
        }
        System.out.println(max);
    }
}
