public class Circle extends Shape2D {
    public Circle(double radius) {
        super(radius);
    }

    public double getArea() {
        return PI * radius * radius;
    }

    public String toString() {
        return "Radius: "+ radius +" Circle Area: "+this.getArea();
    }
}
