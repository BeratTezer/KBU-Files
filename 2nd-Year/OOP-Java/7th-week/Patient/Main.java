public class Main {
    public static void main(String[] args) {
        Patient pat1 = new Patient("Ali");
        Patient pat2 = new Patient("Berat");
        Patient pat3 = new Patient("Mahmut");
        Patient pat4 = new Patient("Recep");
        Patient[] patients = {pat1, pat2, pat3, pat4};

        for (Patient patient: patients) {
            System.out.println(patient);
        }
    }
}