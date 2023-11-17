public class Album {
    String artist;
    String genre;

    Album (String artist, String genre) {
        this.artist = artist;
        this.genre = genre;
    }
    boolean hasRockMusic () {
        return this.genre.equals("Rock");
    }
}
