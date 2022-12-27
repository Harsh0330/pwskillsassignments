import java.util.Scanner;

public class assignemt {
    public static void main(String[] args) {
        // 1)Take 2 integer values in two variables x and y and print their product

        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // System.out.println(a * b);

        // 2)Print the ASCII value of character ‘U

        // char a = 'U';
        // System.out.println((int) a);

        // 3)Write a Java program to take the length and breadth of a rectangle and
        // print its area

        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // System.out.println(a * b);

        // 4)Write a Java program to calculate the cube of a number

        // Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        // System.out.println(a * a * a);

        // 5)Write a Java program to swap two numbers with the help of a third variable

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