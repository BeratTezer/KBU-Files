public class Rectangle extends Shape2D{
    public Rectangle(double height, double width) {
        super(height, width);
    }

    public double getArea() {
        return height * width;
    }

    public String toString() {
        return "Rectangle W: "+width +" H: "+height +" A: "+getArea();
    }
}
