import java.util.Scanner;

public class assignments {
    /**
     * @param args
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 1) Convert a decimal number into binary

        // int n = sc.nextInt();
        // int ans = 0;
        // int pw = 0;
        // while (n != 0) {
        // int rem = n % 2;
        // ans += rem * Math.pow(10, pw);
        // n = n / 2;
        // pw++;
        // }
        // System.out.println(ans);

        // 2)Convert a binary number to decimal

        // int n = sc.nextInt();
        // int ans = 0;
        // int pw = 0;
        // while (n != 0) {
        // int rem = n % 10;
        // ans += rem * Math.pow(2, pw);
        // n = n / 10;
        // pw++;
        // }
        // System.out.println(ans);

        // 3) Add two numbers given in different base

        // int deci = sc.nextInt();
        // int bi = sc.nextInt();
        // int ans = 0;
        // int pw = 0;
        // while (bi != 0) {
        // int rem = bi % 10;
        // ans += rem * Math.pow(2, pw);
        // bi = bi / 10;
        // pw++;
        // }
        // System.out.println(deci + ans);

        // 4) Multiply two numbers given in different base

        // int deci = sc.nextInt();
        // int bi = sc.nextInt();
        // int ans = 0;
        // int pw = 0;
        // while (bi != 0) {
        // int rem = bi % 10;
        // ans += rem * Math.pow(2, pw);
        // bi = bi / 10;
        // pw++;
        // }
        // System.out.println(deci * ans);

        // 5)Convert a decimal double number into binary string for upto k precision
        // digits

        System.out.println("Enter the decimal double number: ");
        double n = sc.nextDouble();
        System.out.println("Enter the number of precision digits: ");
        int k = sc.nextInt();
        int decimal_n = (int) n;
        double fractional_n = n - decimal_n;
        int decimal_binary = 0;
        int power = 1;
        while (decimal_n != 0) {
            int rem = decimal_n % 2;
            decimal_binary += rem * power;
            power *= 10;
            decimal_n /= 2;
        }
        String s = Integer.toString(decimal_binary) + ".";
        while (k > 0 && fractional_n != 0) {
            fractional_n *= 2;
            int digit = (int) fractional_n;
            s += digit;
            fractional_n = fractional_n - digit;
            k--;
        }
        System.out.print(s);
    }
}
