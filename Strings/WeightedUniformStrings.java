/*
*
* @author : Anmol Agrawal
*
*/
import java.util.Scanner;
class Solution {
    public static void main(String args[]) {
        int n, temp = 0;
        int alpha[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        String str;
        Scanner in = new Scanner(System.in);
        str = in.next();
        char a = '0';
        for(int i = 0; i < str.length(); i++) {
            if(str.charAt(i) != a) {
                if(a != '0' && alpha[a - 'a'] < temp) {
                    alpha[a - 'a'] = temp;
                }
                a = str.charAt(i);
                temp = 1;
            }
            else {
                temp++;
            }
        }
        if(alpha[a - 'a'] < temp) {
            alpha[a - 'a'] = temp;
        }
        n = in.nextInt();
        for(int j = 0; j < n; j++) {
            int i;
            int x = in.nextInt();
            for(i = 1; i <= 26; i++) {
                if(x % i == 0 && x / i <= alpha[i-1]) {
                    System.out.println("Yes");
                    break;
                }
            }
            if(i == 27)
                System.out.println("No");
        }
    }
}
