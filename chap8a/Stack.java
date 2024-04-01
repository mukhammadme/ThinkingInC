public class Stack {
    private int[] stack;
    private int count;

    public Stack(int size) {
        stack = new int[size];
        count = 0;
    }

    public void push(int n) {
        if (count < stack.length)
            stack[count++] = n;
    }

    public int pop() {
        return stack[--count];
    }

    public int top() {
        return stack[count-1];
    }

    public int size() {
        return count;
    }

    public static void main(String[] args) {
        Stack stack = new Stack(10);
        for (int i = 0; i < 10; i++) {
            stack.push(i);
            System.out.println("The element pushed was " + stack.top());
        }
        
        while (stack.size() >= 0) {
            System.out.println("The element removed was " + stack.pop());
        }
    }
}
