public class Circle {
    private static final double PI = 3.141519;
    private double radius;


    public Circle (int radius) {
        this.radius = radius;
    }

    public double computeArea() {
        return PI*radius*radius;
    }
}
