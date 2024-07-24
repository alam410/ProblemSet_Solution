import java.util.Scanner;
import static java.lang.System.*;
public class Panoramix_Prediction {

    public static boolean isPrime(int n)
    {

        for(int i =2;i<=Math.sqrt(n);i++){
            if(n==2){
                return  true;
            }
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    public static boolean NextPrime(int a,int b){
        for(int i =a+1;i<b;i++){
            if(isPrime(i)== true)
            {
                return false;
            }
        }
        return true;
    }



    public static void main(String[] args){
        Scanner sc = new Scanner(in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        if(isPrime(a)== true)
        {
            if(isPrime(b)== true)
            {
                boolean Number=NextPrime(a,b);
                if(Number==true) {
                    out.print("YES");
                }
                else{
                    out.print("No");
                }
            }

            else {
                out.print("No");
            }
        }
    }
}
