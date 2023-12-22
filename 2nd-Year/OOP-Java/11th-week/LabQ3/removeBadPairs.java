import java.util.ArrayList;

public class removeBadPairs {
    ArrayList<Integer> list;

    public removeBadPairs(ArrayList<Integer> numberList) {
        this.list = numberList;
    }

    public  ArrayList<Integer> progress() {
        int list_size = list.size();
        for(int i=0; i<list_size; i+=2) {
            if(list.get(i)>list.get(i+1)) {
                list.remove(i);
                list.remove(i);
                i-=2;
                list_size-=2;
                if(i<0) i=0;
            }

        }
        return list;
    }
}
