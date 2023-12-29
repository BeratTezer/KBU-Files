import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        ArrayList<Movie> list = new ArrayList<Movie>();
        list.add(new Movie("Force Awakens", 8.3, 2015));
        list.add(new Movie("Star Wars", 8.7, 1977));
        list.add(new Movie("Empire Strikes Back", 8.8, 1987));
        list.add(new Movie("Return of the Jedi", 8.4, 1983));

        System.out.println("Movies after sorting by rating(Best): ");
        RatingComparator ratingComparator = new RatingComparator();
        Collections.sort(list, ratingComparator);
        for (Movie movie: list) {
            System.out.println(movie.getName() + " " +
                    movie.getRating() + " " +
                    movie.getYear());
        }
        System.out.println("------------------------");

        System.out.println("Movies after sorting by name(Alphabetical): ");
        NameComparator nameComparator = new NameComparator();
        Collections.sort(list, nameComparator);
        for (Movie movie: list) {
            System.out.println(movie.getName() + " " +
                    movie.getRating() + " " +
                    movie.getYear());
        }
        System.out.println("------------------------");

        Collections.sort(list);
        System.out.println("Movies after sorting by year(Oldest): ");
        for (Movie movie: list) {
            System.out.println(movie.getName() + " " +
                               movie.getRating() + " " +
                               movie.getYear());
        }
    }
}
