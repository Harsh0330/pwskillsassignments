import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 1)
        // int x = sc.nextInt();
        // int y = (((x + 8) / 3) % 5) * 5;
        // System.out.println(y);

        // 2)
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // a=a+b;
        // b=a-b;
        // a=a-b;
        // System.out.println(a+" "+b);

        // 3)
        // int a = sc.nextInt();
        // int rem = 0;
        // while (a > 0) {
        // rem = rem + a % 10;
        // a = a / 10;
        // }
        // System.out.println(rem);

        // 4)
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // System.out.println(a<50 && a<b);
        // System.out.println(a<50 || a<b);

        // 5)
        int count = 0;
        int x = sc.nextInt();
        int y = sc.nextInt();
        int n = x ^ y;
        System.out.println(n);
        while (n != 0) {
            n = n & (n - 1);
            count++;
        }
        System.out.println(count);
    }
}
