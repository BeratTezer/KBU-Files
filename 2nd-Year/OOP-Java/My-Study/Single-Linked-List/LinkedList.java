public class LinkedList {
    private node head;

    public void append(int data) {
        node newNode = new node(data);
        if (head == null) head = newNode;
        else {
            node current = head;
            while (current.next != null) current = current.next;
            current.next = newNode;
        }
    }

    public void display() {
        node current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }
}
