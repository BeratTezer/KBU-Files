import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        BankAccount a1 = new BankAccount(100000, "Ahmet", 1000);
        BankAccount a2 = new BankAccount(200000, "Akif", 1500);
        BankAccount a3 = new BankAccount(300000, "Mahir", 2000);
        BankAccount a4 = new BankAccount(400000, "Ali", 2500);

        ArrayList<BankAccount> myAccounts = new ArrayList<>(Arrays.asList(a1,a2,a3,a4));

        Collections.sort(myAccounts);

        for (BankAccount account : myAccounts) {
            System.out.println("Before:" + account.holderName + " " + account.balance);
        }

        for (BankAccount account : myAccounts) {
            System.out.println("After:" + account.holderName + " " + account.balance);
            account.balanceChange(500);
        }


    }
}
