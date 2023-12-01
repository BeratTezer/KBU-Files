public class Cylinder extends Circle {
    private double height;

    public Cylinder () {
        this(1, 1, "red");
    }
    public Cylinder (double height) {
        this(height, 1, "red");
    }
    public Cylinder (double height, double radius) {
        this(height, radius, "red");
    }
    public Cylinder (double height, double radius, String color) {
        this.height = height;
        super.setRadius(radius);
        super.setColor(color);
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getVolume() {
        return getArea()*getHeight();
    }

    @Override
    public String toString() {
        return "Height: " + getHeight() + " Radius: " + getRadius() + " Color: " + getColor();
    }
}
