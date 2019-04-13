public class t0261 {
    public static void main(String args[]){
        pay(10.2);
        pay(-10.0);
    }
    public static void pay(double money){
        if(money > 0.0){
            System.out.println("可以进行支付！");
        }else{
            System.out.println("你穷疯了，没钱还买东西！");
        }
    }
}
