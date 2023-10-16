import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
	    Worker Worker1 = new Worker();
	    
	    Worker1.name = "Berat";
	    Worker1.socialSecurityNumber = 1;
	    Worker1.wage = 15000;
	    Worker1.workingHours = 100;
	    Worker1.displayInfo();
	    Worker1.displaySalary();
	    
	    Scanner scanner = new Scanner(System.in);
	    
	    Worker Worker2 = new Worker();
	    
        System.out.println("\n\nWhat is the worker's name?");
	    Worker2.name = scanner.next();
        System.out.println("\nWhat is the worker's social security number?");
	    Worker2.socialSecurityNumber = scanner.nextInt();
        System.out.println("\nWhat is the worker's wage?");
	    Worker2.wage = scanner.nextInt();
        System.out.println("\nWhat is the worker's working hours?");
	    Worker2.workingHours = scanner.nextInt();
	    Worker2.displayInfo();
	    Worker2.displaySalary();
	    
	    
	    
	}
}
