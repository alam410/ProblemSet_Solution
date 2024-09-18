import java.util.Scanner;

public class I_love_username {
    public static int find_amazing(int arr[]){
        int mini= Integer.MAX_VALUE;
        int maxi=Integer.MIN_VALUE;
        int n= arr.length;
        int amaz=0;
        for(int i =0;i<n;i++){
            if(i==0){
                maxi=arr[i];
                mini=arr[i];
            }
            if(arr[i]>maxi){
                amaz++;
                maxi=arr[i];
            }
            else if (arr[i]<mini) {
                amaz++;
                mini=arr[i];
            }
        }
        return amaz;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] =new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println(find_amazing(arr));

    }
}
