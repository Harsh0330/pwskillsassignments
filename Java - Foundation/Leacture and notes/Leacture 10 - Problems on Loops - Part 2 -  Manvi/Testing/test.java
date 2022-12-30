import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 1) Print the rectangle of stars
        // int l = sc.nextInt();
        // int b = sc.nextInt();
        // for (int i = 0; i < l; i++) {
        // for (int j = 0; j < b; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // 2) Print the rectangle with borders stars
        // int l = sc.nextInt();
        // int b = sc.nextInt();
        // for (int i = 0; i < l; i++) {
        // for (int j = 0; j < b; j++) {
        // if (i == 0 || i == l - 1 || j == 0 || j == b - 1) {
        // System.out.print("*");
        // } else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }

        // 3) Print the right angle triangle
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // 4) Print the right angle triangle reverse
        // int n = sc.nextInt();
        // for (int i = n; i > 0; i--) {
        // for (int j = i; j > 0; j--) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // 5) Print the pyramid
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= n - i; j++) {
        // System.out.print(" ");
        // }
        // for (int j = 1; j <= (2 * i - 1); j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // 6) Numerical rectangle pattern
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // for (int j = i; j <= n; j++) {
        // System.out.print(j);
        // }
        // for (int j = 1; j < i; j++) {
        // System.out.print(j);
        // }
        // System.out.println();
        // }

        // 6) Numerical 1212 rectangle pattern
        // int l = sc.nextInt();
        // int b = sc.nextInt();
        // for (int i = 1; i <= l; i++) {
        // for (int j = 1; j <= b; j++) {
        // if ((i + j) % 2 == 0) {
        // System.out.print(1);
        // } else {
        // System.out.print(2);
        // }
        // }
        // System.out.println();
        // }

        // 7) Numerical right angle triangle
        // int n = sc.nextInt();
        // for(int i=1;i<=n;i++){
        // for(int j=1;j<=i;j++){
        // System.out.print(j);
        // }
        // System.out.println();
        // }

        // 8) Numerical palindrome pyramid
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            for (int j = i - 1; j >= 1; j--) {
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
