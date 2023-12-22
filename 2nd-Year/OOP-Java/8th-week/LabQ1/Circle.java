public class Circle {
    private double radius;
    private String color;

    public Circle () {
        this(1, "red");
    }
    public Circle (double radius) {
        this(radius, "red");
    }
    public Circle (double radius, String color) {
        this.radius = radius;
        this.color = color;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public double getArea() {
        return 3.14*getRadius()*getRadius();
    }

    @Override
    public String toString() {
        return "Radius: " + getRadius() + " Color: " + getColor();
    }

}
