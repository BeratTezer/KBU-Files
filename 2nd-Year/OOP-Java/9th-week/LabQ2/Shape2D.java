public abstract class Shape2D {
    public final double PI = 3;
    public double height;
    public double radius;
    public double width;

    public Shape2D (double height, double width) {
        this.height = height;
        this.width = width;
    }
    public Shape2D (double radius) {
        this.radius = radius;
    }

    public Shape2D() {};

    public abstract double getArea();

    public abstract String toString();
}
