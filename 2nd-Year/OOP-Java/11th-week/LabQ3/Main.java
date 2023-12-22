import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> myList = new ArrayList<>(Arrays.asList(3,7,9,2,5,5,8,5,6,3,4,7,3,1));

        removeBadPairs goodList = new removeBadPairs(myList);

        System.out.println(goodList.progress());


    }
}
