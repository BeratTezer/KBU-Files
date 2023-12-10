import java.lang.Math;
public class Pyramid extends Shape3D{
    public Pyramid(int depth, int height, int width) {
        super(depth, height, width);
    }

    public double getVolume() {
        return depth * width * height / 3;
    }

    public double getArea() {
        return height*width + width*Math.sqrt(height*height/4+depth*depth)+height*Math.sqrt(width*width/4+depth*depth);
    }

    public String toString() {
        return "Pyramid Area: "+getArea();
    }
}
