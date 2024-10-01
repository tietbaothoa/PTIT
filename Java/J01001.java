import java.util.Scanner;

public class J01001 {
    public static void main(String[] args) {
        Scanner canh = new Scanner(System.in);
        int a = canh.nextInt();
        int b = canh.nextInt();
        if(a <=0 || b<= 0){
            System.out.println(0);
        }
        else{
            System.out.print(2*a + 2*b + " ");
            System.out.print(a*b);
        }
        canh.close();
    }
}