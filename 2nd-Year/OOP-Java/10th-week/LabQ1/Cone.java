import java.lang.Math;
public class Cone extends Shape3D{
    public Cone(double height, double radius) {
        super(height, radius);
    }

    public double getVolume() {
        return PI*radius*radius*height/3;
    }

    public double getArea() {
        return PI*radius*(radius+Math.sqrt(height*height+radius*radius));
    }

    public String toString() {
        return "Cone area:"+getArea()+" Volume: "+getVolume();
    }
}
