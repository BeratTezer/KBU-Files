public class Patient {
    private int patientId;
    private String name;
    public static int counter;

    public Patient(String name) {
        this.name = name;
        this.patientId = ++counter;
    }
    public String getName() {
        return name;
    }
    public int getPatientId() {
        return patientId;
    }

    @Override
    public String toString() {
        return this.name + " " + this.patientId;
    }
}
