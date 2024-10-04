import java.util.Scanner;
public class Perfect_Permutation {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        if(n%2!=0) {
            System.out.println("-1");
        }
        else
            {
                for (int s=2,e=1; s <= n && e<n; s+=2,e+=2)
                {
                    System.out.print(s+" "+e+" ");
                }
            }
    }

}
