public class Main {
    public static void main(String[] args) {
        Album album1 = new Album("Mozart", "Classic");
        Album album2 = new Album("Lenny Kravitz", "Rock");

        Song sarki1 = new Song("sarki1", 150, album1);
        Song sarki2 = new Song("sarki2", 200, album2);
        Song sarki3 = new Song("sarki3", 300, album1);

        System.out.println("sarki1 ve sarki2 ayni albumde mi? " + sarki1.onSameAlbum(sarki2));
        System.out.println("sarki1 ve sarki3 ayni albumde mi? " + sarki1.onSameAlbum(sarki3));

        System.out.println("\nAlbum1'de rock muzik var mi? " + album1.hasRockMusic());
        System.out.println("Album2'de rock muzik var mi?? " + album2.hasRockMusic());

    }
}


