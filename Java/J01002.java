import java.util.Scanner;

public class J01002 {
    public static void main(String[] args) {
        Scanner test = new Scanner(System.in);
        int t = test.nextInt();

        while(t-- > 0) {
            int n = test.nextInt();
            int sum = 0;

            for (int i = 1; i <= n; i++) {
                sum += i;
            }

            System.out.println(sum);
        }

        test.close();
    }
}
