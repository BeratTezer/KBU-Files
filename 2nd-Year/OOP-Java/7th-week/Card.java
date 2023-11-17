public class Card {
    int suit;
    int rank;
    int value;
    enum Suit {
        DIAMOND,
        CLUB,
        HEART,
        SPADE
    }

    enum Rank {
        ACE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING
    }

    public Card() {

    }

    public int getSuit() {
        return suit;
    }

    public int getRank() {
        return rank;
    }

    public int getValue() {
        return value;
    }

    @Override
    public String toString() {
        return suit + " " + rank;
    }

    public void printf() {

    }
}
