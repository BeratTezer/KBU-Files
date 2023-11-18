public class Card {
	static enum Suit{
			DIAMOND,
			CLUB,
			HEART,
			SPADE,
		}


	static enum Rank{
		ACE,
		TWO,
		THEREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		JACK,
		QUEEN,
		KING;
	}
		
	private Suit suit;
	private Rank rank;
	
	public Card(Suit suit,Rank rank) {
		this.suit = suit;
		this.rank=rank;
	}
	public Suit getSuit() {
		return suit;
	}
	public Rank getRank() {
		return rank;
	}
	public int getValue() {
		return rank.ordinal()+1;
	}
	@Override
	public String toString() {
		return "Suit:" +suit + "  Rank:" +rank;
		
	}
}
