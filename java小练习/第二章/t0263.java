public class t0263 {
    public static void main(String argn[]){
        set(100);
        set(3);
        set(10);
    }
    public static void set(int x){
        if(x == 3){
            return;
        }
        System.out.println("x = " + x);
    }
}
