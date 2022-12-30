import java.util.Scanner;

public class assignments {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 1)Write a program to print Fibonacci series of n terms where n is input by
        // user.
        // int next = 1;
        // int current = 1;
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // System.out.print(current + " ");
        // int sum = current + next;
        // current = next;
        // next = sum;

        // 2)Write a program to enter the numbers till the user wants, the number can be
        // positive, negative or zero. Calculate the sum of numbers until a negative
        // number is encountered. If the input is a negative number, current sum is
        // discarded and print -1.

        // int n;
        // int sum = 0;
        // while (sc.hasNextInt()) {
        // int num = sc.nextInt();
        // if (num >= 0) {
        // sum += num;
        // } else {
        // sum = -1;
        // break;
        // }
        // }
        // System.out.print(sum);

        // 3)Write a program to calculate the factorial of a number
        // int fact = 1;
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // fact *= i;
        // }
        // System.out.print(fact);

        // 4)Write a program to print all Armstrong numbers between 1 to n
        // int n = sc.nextInt();
        // int num = 1;
        // while (num <= n) {
        // int count = 0;
        // int i = num;
        // while (i > 0) {
        // count++;
        // i /= 10;
        // }
        // int val = num;
        // int sum = 0;
        // while (val > 0) {
        // int digit = val % 10;
        // sum += Math.pow(digit, count);
        // val /= 10;
        // if (sum > val) {
        // continue;
        // }
        // }
        // if (sum == num) {
        // System.out.println(num);
        // }
        // num++;
        // }

        // 5)Write a program to print the cross pattern given below (in the shape of X)
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= n; j++) {
        // if (i == j || i + j == n + 1) {
        // System.out.print("*");
        // } else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }

        // 6)Write a program to print alphabet diamond pattern:
        // int size = 5;
        // int alpha = 65;
        // int num = 0;
        // for (int i = 1; i <= size; i++) {
        // for (int j = size; j > i; j--) {
        // System.out.print(" ");
        // }
        // for (int k = 0; k < i * 2 - 1; k++) {
        // System.out.print((char) (alpha + num++));
        // }
        // num = 0;
        // System.out.println();
        // }
        // for (int i = 1; i <= size - 1; i++) {
        // for (int j = 0; j < i; j++) {
        // System.out.print(" ");
        // }
        // for (int k = (size - i) * 2 - 1; k > 0; k--) {
        // System.out.print((char) (alpha + num++));
        // }
        // num = 0;
        // System.out.println();
        // }

        // 7)Write a program to print pattern "+"
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= n; j++) {
        // if (i == n / 2 + 1 || j == n / 2 + 1) {
        // System.out.print("*");
        // } else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }

        // 8)Write a program to print a triangle of prime numbers upto given number of
        // lines of the trinagle.

        // int x1;
        // int x2;
        // int x3;
        // int number = 3;
        // int banner = 0;
        // x1 = sc.nextInt();
        // int d = x1;
        // for (x2 = 1; x2 <= x1; x2++) {
        // for (int e = 1; e <= d; e++) {
        // System.out.print(" ");
        // }
        // if (x2 == 1) {
        // System.out.print("2");
        // } else {
        // for (x3 = 0; x3 != x2;) {
        // banner = 0;
        // for (int k = 2; k < number; k++) {
        // if ((number % k) == 0)
        // banner = 1;
        // }
        // if (banner == 0) {
        // x3++;
        // System.out.print(number + " ");
        // }
        // number++;
        // }
        // }
        // System.out.println();
        // d--;
        // }

        // 9)Write a program to check whether a prime Number can be expressed as a Sum
        // of Two Prime Numbers
        // int n = sc.nextInt();
        // if (isPrime(n) && isPrime(n - 2)) {
        // System.out.print(true);
        // } else {
        // System.out.print(false);
        // }
        // }

        // public static boolean isPrime(int n) {
        // if (n <= 1)
        // return false;

        // for (int i = 2; i * i <= n; i++) {
        // System.out.println("i : " + (i));
        // System.out.println("i*i : " + (i * i));
        // if (n % i == 0)
        // return false;
        // }
        // return true;

        // 10) You are given n number of bulbs. They are all switched off. A weird
        // fluctuation in voltage hits
        // the circuit n times. In the 1st fluctuation all bulbs are toggled, in the 2nd
        // fluctuation every 2nd bulb
        // is toggled, in the 3rd fluctuation every 3rd bulb is toggled and so on.
        // You've to find which bulbs will
        // be switched on after n fluctuations.
        // Take as input a number n, representing the number of bulbs.
        // Print all the bulbs that will be on after the nth fluctuation in voltage

        // int n = sc.nextInt();
        // for (int i = 1; i * i <= n; i++) {
        // System.out.println("i*i : " + i * i + " ");
        // }
    }
}