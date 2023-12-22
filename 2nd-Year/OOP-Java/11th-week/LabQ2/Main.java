import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> myList = new ArrayList<>(Arrays.asList("four", "score", "and", "seven", "years", "ago"));

        switchPairs sw = new switchPairs(myList);


        System.out.println(sw.swPair());

    }
}
