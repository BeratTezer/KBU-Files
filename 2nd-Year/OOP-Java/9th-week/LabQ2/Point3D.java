public class Point3D extends Point2D{
    private int z;

    public Point3D() {
        this(0, 0 ,0);
    }
    public Point3D(int x, int y, int z) {
        super.setX(x);
        super.setY(y);
        this.z = z;
    }

    public int getZ() {
        return z;
    }

    public void setZ(int z) {
        this.z = z;
    }

    @Override
    public String toString() {
        return "(" + getX() + "," + getY() + "," + getZ() + ")";
    }
}
