import java.util.ArrayList;

public class switchPairs {
    public ArrayList<String> list;
    public switchPairs(ArrayList<String> list) {
        this.list = list;
    }

    public ArrayList<String> swPair() {
        for(int i=0; i<list.size(); i+=2) {
            String temp = list.get(i);
            list.set(i, list.get(i+1));
            list.set(i+1, temp);
        }
        return this.list;
    }


}
