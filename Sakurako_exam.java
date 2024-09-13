import java.util.Scanner;

public class Sakurako_exam {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i=0;i<t;i++)
            {
                int a = sc.nextInt();
                int b = sc.nextInt();
                if(a%2==1){
                    System.out.print("NO\n");
                }
                else{
                    if(b%2==0){
                        System.out.print("YES\n");
                    }
                    else {
                        if(a==0){
                            System.out.print("NO\n");
                        }
                        else{
                            System.out.println("YES");
                        }
                    }
                }

        }
    }
}
