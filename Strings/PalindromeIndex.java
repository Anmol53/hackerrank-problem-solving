/*
*
* @author : Anmol Agrawal
*
*/
import java.util.Scanner;

class PalindromeIndex {
    static int pC(String str) {
        int len = str.length();
        int mid = len/2;
        for(int i = 0, j = len - 1; i < mid; i++, j--)
            if(str.charAt(i) != str.charAt(j))
                return i;
        return -1;
    }
    
    public static void main(String args[]) {
        int q;
        String str, str1;
        Scanner in = new Scanner(System.in);
        q = in.nextInt();
        for(int i = 0; i < q; i++) {
            str = in.next();
            int a = pC(str);
            if (a == -1) {
                System.out.println(a);
                continue;
            }
            else{
                int b = str.length() - a - 1;
                str1 = str.substring(0,a) + str.substring(a+1);
                int c = pC(str1);
                if (c == -1) {
                    System.out.println(a);
                    continue;
                }
                str1 = str.substring(0,b) + str.substring(b+1);
                c = pC(str1);
                if (c == -1) {
                    System.out.println(b);
                    continue;
                }
            }
            System.out.println("-1");            
        }
    }
}
