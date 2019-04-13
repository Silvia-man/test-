class A{
    private String msg;
    private int age;
    public A(String msg){
        this.msg = msg;                 //????为啥子类无法收到？？？？
        System.out.println("msg = " + this.msg);
    }
    public A(String msg,int age){
        this.msg = msg;
        this.age = age;
        System.out.println("msg = " + this.msg + ",age = "+this.age);

    }

}
class B extends A{
    private String msg;
    private int age;
    public B(String msg){
        super(msg);
        this.age = 30;getInfo();
    }
    public B(String msg,int age){       //好像不能新加构造,只能调用父类已经有的
        super(msg,age);
        getInfo();
    }
    public String getInfo(){
        return "msg：" + this.msg + "age：" + this.age ;
    }
}
public class t0410ThisSuper {
    public static void main(String[] args) {
        B b = new B("hello",20);
        System.out.println(b.getInfo() + ",");
        B c = new B("2hello");
        System.out.println(c.getInfo() + ",");
    }
}
