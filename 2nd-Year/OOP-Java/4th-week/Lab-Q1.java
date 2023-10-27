import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        try {
            int number = input.nextInt();
        } catch (Exception InputMismatchException) {
            System.out.println("Wrong input. It must be an integer.");
        }
    }
}