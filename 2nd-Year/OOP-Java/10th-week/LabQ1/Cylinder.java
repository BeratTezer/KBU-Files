public class Cylinder extends Shape3D{
    public Cylinder(double height, double radius) {
        super(height, radius);
    }

    public double getVolume() {
        return  PI*radius*radius*height;
    }
    public double getArea() {
        return (2*PI*radius*radius) + (2*PI*radius*height);
    }

    public String toString() {
        return "Cylinder  Volume : "+getVolume() + " Area : "+getArea();
    }
}
