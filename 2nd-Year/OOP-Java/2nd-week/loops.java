public class Main {
    public static void main(String[] args) {
        for (int i = 1; i <= 15; i++) {
            System.out.println("Number: " + i);
        }
        
        System.out.println("----------");
        
        int i = 1;
        while (i <= 10) {
            System.out.println(i);
            i++;
        }
        
        System.out.println("----------");
        
        int number = 10;
        do {
            System.out.println("Number: " + number);
            number--;
        } while (number != 0);

        System.out.println("----------");
        
        int[] array = {1, 2, 3, 4, 5};
        for (int element : array) {
            System.out.println(element);
        }
    }
}