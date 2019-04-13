//编写一个银行帐户类,类的构成包括：
//	· 数据成员：
//		|- 用户的帐户名称、用户的帐户余额；
//	· 方法包括：
//		|- 开户（设置帐户名称，及余额），利用构造方法完成
//	· 查询余额
class Bank{
    private String name;
    private int money;

    public Bank(){
    }
    public Bank(String name, int money){
        super();
        this.name = name;
        this.money = money;
    }
    public String toString(){
        return this.name+"  " + this .money;
    }

    public int getMoney() {
        return money;
    }
}
public class Bank类 {
    public static void main(String[] args) {
        Bank bank = new Bank("张三",1000);
        System.out.println("余额：" + bank.getMoney());

    }
}
