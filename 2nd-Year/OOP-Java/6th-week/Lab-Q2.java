enum Branch {
    MATH("information regarding math"),
    PHYSICS("information regarding physics"),
    CS("information regarding cs"),
    ENG("information regarding eng");

    private String description;

    Branch(String description) {
        this.description = description;
    }

    public String getDescription() {
        return description;
    }
}

class Teacher {
    private int id;
    private Branch branch;

    public Teacher(int id, Branch branch) {
        this.id = id;
        this.branch = branch;
    }

    public int getId() {
        return id;
    }

    public Branch getBranch() {
        return branch;
    }
}

public class Main {
    public static void main(String[] args) {
        Teacher teacher1 = new Teacher(1, Branch.MATH);
        Teacher teacher2 = new Teacher(2, Branch.PHYSICS);
        Teacher teacher3 = new Teacher(3, Branch.CS);
        Teacher teacher4 = new Teacher(4, Branch.ENG);

        Teacher[] teachers = { teacher1, teacher2, teacher3, teacher4 };

        for (Teacher teacher : teachers) {
            System.out.println("Teacher ID: " + teacher.getId() +
                    ", Branch: " + teacher.getBranch() +
                    ", Description: " + teacher.getBranch().getDescription());
        }
    }
}