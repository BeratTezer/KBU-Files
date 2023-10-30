import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Worker worker1 = new Worker();
        Worker worker2 = new Worker();
        Worker worker3 = new Worker();

        Scanner input = new Scanner(System.in);

        String n = input.next();
        worker1.setName(n);
        try {
            int s = input.nextInt();
            if (s <= 0)
                throw new Exception("salary amount must be greater than zero");
            worker1.setSalary(s);
        } catch (Exception e) {
            System.out.println("salary amount must be greater than zero");
        }

        String n1 = input.next();
        worker2.setName(n1);
        try {
            int s1 = input.nextInt();
            if (s1 <= 0)
                throw new Exception("salary amount must be greater than zero");
            worker1.setSalary(s1);
        } catch (Exception e) {
            System.out.println("salary amount must be greater than zero");
        }

        String n2 = input.next();
        worker3.setName(n2);
        try {
            int s2 = input.nextInt();
            if (s2 <= 0)
                throw new Exception("salary amount must be greater than zero");
            worker1.setSalary(s2);
        } catch (Exception e) {
            System.out.println("salary amount must be greater than zero");
        }

        System.out.printf("There is %d worker.", Worker.counter);
    }
}