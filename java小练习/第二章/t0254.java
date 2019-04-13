public class t0254 {
    public static void main(String args[]){
        int sum = 0;
        int current = 1;
        do{
            sum += current;
            current ++;
        }while(current <= 10);
        System.out.println(sum);
    }
}
