public class t0227 {
    public static void main(String args[]){
        int numA = 10;
        int numB = 20;
        int result = numA * 2 - --numB * numA++ + numB - numA-- + numB;
        System.out.println(result);
    }
}
