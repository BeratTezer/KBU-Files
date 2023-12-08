public abstract class Shape3D extends Shape2D{
    public double depth;

    public Shape3D(double depth, double height, double width) {
        super(height, width);
        this.depth = depth;
    }
    public Shape3D(double depth, double radius) {
        super(radius);
        this.depth = depth;
    }

    public abstract double getVolume();

    public abstract String toString();
}
