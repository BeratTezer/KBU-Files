public class Person {
    int id;
    String firstName;
    String lastName;
    int age;
    static int count;

//    static int getNextId() {
//        return ++count;
//    }

    public Person(int id, String firstName, String lastName, int age) {
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }
    public Person(String firstName, String lastName) {
        this(++count, firstName, lastName, 0);
//        this(getNextId(), firstName, lastName, 0);
    }

    public Person(int id) {
        this(id, "default", "default", 0);
    }
    public Person() {
        this(++count, "default", "default", 0);
//        this(getNextId(), "default", "default", 0);
    }


}
