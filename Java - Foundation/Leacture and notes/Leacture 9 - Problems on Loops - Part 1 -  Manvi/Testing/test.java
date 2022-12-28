import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 1)number of digits

        // int count = 0;
        // int n = sc.nextInt();
        // while (n != 0) {
        // n /= 10;
        // count++;
        // }
        // System.out.println(count);

        // 2)Sum of digits

        // int sum = 0;
        // int n = sc.nextInt();
        // while (n != 0) {
        // sum += n % 10;
        // n /= 10;
        // }
        // System.out.println(sum);

        // 3)Reverse of a number

        // int rev = 0;
        // int n = sc.nextInt();
        // while (n != 0) {
        // rev = rev * 10 + n % 10;
        // n /= 10;
        // }
        // System.out.println(rev);

        // 4)Sum of the series 1-2+3-4...n
        int ans = 0;
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                ans -= i;
            } else {
                ans += i;
            }
        }
        System.out.println(ans);
    }
}
