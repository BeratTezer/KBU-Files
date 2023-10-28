import java.util.Scanner;

public class Account {
    private double balance;
    private char ownerName;
    private int password = 1234;

    public Account (char isim, double para) {
        this.balance = para;
        this.ownerName = isim;
    }

    public Account (char name) {
        this.balance = 0;
        this.ownerName = name;
    }
    public void add(double amount) {
        this.balance += amount;
        System.out.printf("%f$ added to the account", amount);
    }

    public void withdraw(double amount) {
        Scanner input = new Scanner(System.in);
        int enteredPassword = input.nextInt();
        int tries = 0;

        while (tries < 3) {
            if (this.password == enteredPassword) {
                System.out.println("Password is correct");
                if (this.balance <= amount) {
                    System.out.println("Your account doesn't have enough money");
                    break;
                } else {
                    System.out.println("Withdraw completed");
                    break;
                }
            } else {
                System.out.println("Wrong password, try again");
                tries += 1;
            }
        }
        
        if (tries == 3) {
            System.out.println("Your account is blocked.");
        }
    }

    public double getBalance() {
        return this.balance;
    }

    public void setOwnerName(char ownerName) {
        this.ownerName = ownerName;
    }

    public char getOwnerName() {
        return ownerName;
    }
}