public class Song {
    String title;
    int lenInSeconds;
    Album onAlbum;

    Song (String title, int lenInSeconds, Album album) {
        this.title = title;
        this.lenInSeconds = lenInSeconds;
        this.onAlbum = album;
    }

    boolean onSameAlbum (Song song) {
        return this.onAlbum == song.onAlbum;
    }
}
