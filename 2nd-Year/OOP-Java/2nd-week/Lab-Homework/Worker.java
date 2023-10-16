public class Worker {
    String name;
    int socialSecurityNumber;
    float wage;
    int workingHours;
    
    void displayInfo() {
        System.out.printf("Name: %s - Security Number: %d\n", name, socialSecurityNumber);
    }
    
    void displaySalary() {
        System.out.printf("Salary: %f", wage*workingHours);
    }
    
} 