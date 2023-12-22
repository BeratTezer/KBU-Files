import java.util.Random;
public class RandomList {
    private class Node {
        int value;
        Node next;
    }

    private Node head = new Node();

    public RandomList(int bound, int size) {
        Random random = new Random();
        for(int i=0; i<size; i++) {
            head.value = random.nextInt(bound);
            head = head.next;
        }
    }

    public boolean isEmpty() {
        return (head == null);
    }

    public String toString() {

        //////////////////////
        // Insert code here //
        //////////////////////
    }

    public void removeAdjacentDuplicates() {

        //////////////////////
        // Insert code here //
        //////////////////////
    }

    public void removeAdjacentDuplicatesR() {

        //////////////////////
        // Insert code here //
        //////////////////////
    }

    public int getMax() {

        //////////////////////
        // Insert code here //
        //////////////////////
    }

    public void removeMaxValues() {

        //////////////////////
        // Insert code here //
        //////////////////////
    }
}
