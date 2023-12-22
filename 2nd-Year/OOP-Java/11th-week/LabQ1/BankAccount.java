public class BankAccount implements Comparable<BankAccount>{
    int accountNo;
    String holderName;
    double balance;

    public BankAccount(int accountNo, String holderName, double balance) {
        this.accountNo = accountNo;
        this.holderName = holderName;
        this.balance = balance;
    }

    public void balanceChange(double amount) {
        this.balance -= amount;
    }

    @Override
    public int compareTo(BankAccount other) {
        // Compare based on holderName
        return this.holderName.compareTo(other.holderName);
    }

}
