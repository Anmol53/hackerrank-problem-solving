import java.util.*;

public class Solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int R = sc.nextInt();
            int C = sc.nextInt();
            String arr[] = new String[R];
            for(int i = 0; i < R; i++){
                arr[i] = sc.next();
            }
            int r = sc.nextInt();
            int c = sc.nextInt();
            String brr[] = new String[r];
            for (int i = 0; i < r; i++) {
                brr[i] = sc.next();
            }
            int temp = 0, y = 0, i;
            for(i = 0; i < R; i++){
                int x = arr[i].indexOf(brr[0],y);
                if(x != -1){
                    int j, k;
                    temp = x;
                    for(j = 1, k = i + 1; j < r && j < R; j++, k++){
                        if(!brr[j].equals(arr[k].substring(x,x+c))){
                            break;
                        }
                    }
                    if(j == r){
                        System.out.println("YES");
                        break;
                    }
                    else{
                        i--;
                        y = x + 1;
                    }
                }
                if(y != 0 && x == -1){
                    y = 0;
                }
            }
            if(i == R){
                System.out.println("NO");
            }
        }
    }
}
