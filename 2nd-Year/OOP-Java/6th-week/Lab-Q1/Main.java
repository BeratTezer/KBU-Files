public class Main {
    public static void main(String[] args) {
        Person person1 = new Person(756, "Ahmet", "Sezer", 20);
        Person person2 = new Person("Berat", "Tezer");
        Person person3 = new Person(830);
        Person person4 = new Person();

        System.out.printf("Id: %-5d - İsim: %-10s - Soyisim: %-10s - Age: %-2d\n", person1.id, person1.firstName, person1.lastName, person1.age);
        System.out.printf("Id: %-5d - İsim: %-10s - Soyisim: %-10s - Age: %-2d\n", person2.id, person2.firstName, person2.lastName, person2.age);
        System.out.printf("Id: %-5d - İsim: %-10s - Soyisim: %-10s - Age: %-2d\n", person3.id, person3.firstName, person3.lastName, person3.age);
        System.out.printf("Id: %-5d - İsim: %-10s - Soyisim: %-10s - Age: %-2d", person4.id, person4.firstName, person4.lastName, person4.age);
    }
}