public class Sphere extends Shape3D{
    public Sphere(int depth, double height) {
        super(depth, height);
    }

    public double getVolume() {
        return 4/3 * PI * radius * radius *radius;
    }

    public double getArea() {
        return 4 * PI * radius *radius;
    }

    public String toString() {
        return "Sphere  Volume: "+getVolume() + " Area: "+getArea();
    }
}
