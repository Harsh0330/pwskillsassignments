import java.util.Scanner;

public class assignment {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        // 1)Input name, roll number and field of interest from user and print in the
        // format below :Name: xyz, Roll number: xyz, Field of interest: xyz

        // String first_name = scn.next();
        // String last_name = scn.next();
        // int roll_number = scn.nextInt();
        // String field_of_interest = scn.next();
        // System.out.println("Name: " + first_name + " " + last_name);
        // System.out.println("Roll Number: " + roll_number);
        // System.out.println("Field of interest: " + field_of_interest);

        // 2)Input two different string and print them in same line

        // String first_name = scn.next();
        // String second_name = scn.next();
        // System.out.println("Name: " + first_name + second_name);

        // 3) If the marks of Robert in three subjects are entered through keyboard
        // (each out of100), write a program to calculate his total marks and percentage
        // marks.

        // int first = scn.nextInt();
        // int second = scn.nextInt();
        // int third = scn.nextInt();
        // System.out.println("total: " + (first + second + third));
        // System.out.println("Average: " + (first + second + third) / 3);

        // 4)Given two numbers, return their sum in the following format:Int t
        // representing number of test cases
        // T lines of Two integers representing the numbers to be added

        // int t = scn.nextInt();
        // for (int i = 1; i <= t; i++) {
        // int a = scn.nextInt();
        // int b = scn.nextInt();
        // System.out.println(a + b);
        // }

        // 5)Given few lines of input(number of lines unknown) where each line has
        // twostrings, concatenate the strings.

        while (scn.hasNextLine()) {
            String a = scn.next();
            String b = scn.next();
            System.out.println(a + b);
        }
    }
}