public class Worker {
    private String name;
    private int salary;

    static int counter;

    public Worker() {
        counter++;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }
}