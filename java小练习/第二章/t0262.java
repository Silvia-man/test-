public class t0262 {
    public static void main(String args[]){
        int result = add(10,20);
        System.out.println("计算结果：" + result);
        System.out.println("计算结果：" + add(50,60));
    }
    public static int add(int x,int y){
        return x + y;
    }
}
