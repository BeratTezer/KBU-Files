public class Main {
	public static void main(String[] args) {
	    System.out.printf("Factorial result of 5 = %d", factorial(5));
	}
	
	public static int factorial(int number) {
	    if (number == 0) return 1;
	    else return number*factorial(number-1);
    }
}