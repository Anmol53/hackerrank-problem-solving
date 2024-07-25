import java.util.*;

public class Solution implements Comparable<Solution> {
    Integer length;
    String str;

    public Integer getLen() {
        return length;
    }
    public String getStr() {
        return str;
    }

    @Override
    public int compareTo(Solution o) {
        int a = this.getLen().compareTo(o.getLen());
        if(a == 0){
            return this.getStr().compareTo(o.getStr());
        }
        else{
            return a;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Solution> solList = new ArrayList<Solution>();
        for(int i = 0; i < n; i++){
            String a = sc.next();
            Integer aLen = a.length();
            Solution sl = new Solution();
            sl.length = aLen;
            sl.str = a;
            solList.add(sl);
        }
        Collections.sort(solList);
        for(int i = 0; i < n; i++){
            System.out.println(solList.get(i).str);
        }
    }
}
