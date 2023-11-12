public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle(5);
        Circle circle2 = new Circle(10);
        Circle circle3 = new Circle(15);

        System.out.printf("Are of the circle 1: %f\n", circle.computeArea());
        System.out.printf("Are of the circle 2: %f\n", circle2.computeArea());
        System.out.printf("Are of the circle 3: %f", circle3.computeArea());
    }
}