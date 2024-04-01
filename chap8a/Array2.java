public class Array2 {
    public static void main(String[] args) {
        int[][] a2 = {{1,2}, {3,4}, {5,6}};
        for (int i = 0; i < a2.length; i++) {
            for (int j = 0; j < a2[i].length; j++) {
                System.out.println(a2[i][j]);
            }
            System.out.println();
        }
    }
}
