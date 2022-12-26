import java.util.Scanner;

public class assignment {
    public static void main(String[] args) {
        // 1)
        Scanner scn = new Scanner(System.in);
        // String first_name = scn.next();
        // String last_name = scn.next();
        // int roll_number = scn.nextInt();
        // String field_of_interest = scn.next();
        // System.out.println("Name: " + first_name + " " + last_name);
        // System.out.println("Roll Number: " + roll_number);
        // System.out.println("Field of interest: " + field_of_interest);

        // 2)
        // String first_name = scn.next();
        // String second_name = scn.next();
        // System.out.println("Name: " + first_name + second_name);

        // 3)
        // int first = scn.nextInt();
        // int second = scn.nextInt();
        // int third = scn.nextInt();
        // System.out.println("total: " + (first + second + third));
        // System.out.println("Average: " + (first + second + third) / 3);

        // 4)
        // int t = scn.nextInt();
        // for (int i = 1; i <= t; i++) {
        // int a = scn.nextInt();
        // int b = scn.nextInt();
        // System.out.println(a + b);
        // }

        // 5)
        while (scn.hasNextLine()) {
            String a = scn.next();
            String b = scn.next();
            System.out.println(a + b);
        }
    }
}