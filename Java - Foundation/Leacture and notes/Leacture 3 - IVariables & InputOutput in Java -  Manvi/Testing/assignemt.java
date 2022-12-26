import java.util.Scanner;

public class assignemt {
    public static void main(String[] args) {
        // 1)
        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // System.out.println(a * b);

        // 2)
        // char a = 'U';
        // System.out.println((int) a);

        // 3)
        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // System.out.println(a * b);

        // 4)
        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // System.out.println(a * a * a);

        // 5)
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(a + " " + b);
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println(a + " " + b);
    }
}