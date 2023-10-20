public class Account {
    private double balance;
    private char ownerName;

    public Account (char name, double balance) {
        this.balance = balance;
        this.ownerName = name;
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
        if (this.balance <= amount) {
            System.out.println("Your account doesn't have enough money");
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