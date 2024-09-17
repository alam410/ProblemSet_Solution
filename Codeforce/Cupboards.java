import java.util.Scanner;
import java.io.*;

public class Cupboards {

    public static int minimum(int a,int b){
        int min= Integer.MAX_VALUE;
        if (a>b){
            min=b;
        }
        else {
            min = a;
        }
        return min;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a = 0; // Count of cupboards with 1 in the first column
        int b = 0; // Count of cupboards with 0 in the first column
        int c = 0; // Count of cupboards with 1 in the second column
        int d = 0; // Count of cupboards with 0 in the second column


        for (int i = 0; i < t; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            if (x == 1) {
                a++;
            } else {
                b++;
            }
            if (y == 1) {
                c++;
            } else {
                d++;
            }
        }


        int cup_a = minimum(a,b);
        int cup_b = minimum(c,d);


        System.out.println(cup_a + cup_b);
    }
}
