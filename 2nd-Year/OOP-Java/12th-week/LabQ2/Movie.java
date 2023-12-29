import javax.swing.plaf.BorderUIResource;

public class Movie implements Comparable<Movie> {
    double rating;
    String name;
    int year;

    public Movie(String name, double rating, int year) {
        this.name = name;
        this.rating = rating;
        this.year = year;
    }

    public double getRating() {
        return rating;
    }

    public String getName() {
        return name;
    }

    public int getYear() {
        return year;
    }

    @Override
    public int compareTo(Movie other) {
//        return Integer.compare(this.year, other.year); // Stars from smaller
        return Integer.compare(other.year, this.year); // Stars from bigger
    }
}
