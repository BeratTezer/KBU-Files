public class Main {
    public static void main(String[] args) {
        RandomList list = new RandomList(4,15);
        System.out.println("Random list:"  + System.lineSeparator()+ list + System.lineSeparator());
        list.removeAdjacentDuplicates();
        System.out.println("List with adjacent duplicates removed:" +
                System.lineSeparator() + list + System.lineSeparator());

        RandomList list2 = new RandomList(4,15);
        System.out.println("Another Random list:"  + System.lineSeparator()+ list2 + System.lineSeparator());
        list2.removeAdjacentDuplicatesR();
        System.out.println("List with adjacent duplicates removed recursively:" +
                System.lineSeparator() + list2 + System.lineSeparator());

        RandomList list3 = new RandomList(4,15); // make a new list
        System.out.println("A Third Random list:" + System.lineSeparator() + list3 + System.lineSeparator());
        System.out.println("Successively removing max values:");
        while (! list3.isEmpty()) {
            list3.removeMaxValues();
            System.out.println(list3);
        }
    }
}
