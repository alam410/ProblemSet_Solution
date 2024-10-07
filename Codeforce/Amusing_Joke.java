import java.util.Arrays;
import java.util.Scanner;

public class Amusing_Joke {
    public static String sortString(String inputString) {
        char tempArray[] = inputString.toCharArray();
        Arrays.sort(tempArray);
        return new String(tempArray);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String arr[] =new String[2];
        for(int i =0;i<2;i++){
            arr[i]=sc.next();
        }
        String result= arr[0]+arr[1];
        String b= sc.next();

        if(sortString(b).equals(sortString(result))){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }

    }
}
