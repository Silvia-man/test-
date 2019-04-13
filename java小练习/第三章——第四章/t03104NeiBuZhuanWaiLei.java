class Oter{
    private String msg = "hello world";
    public void fun(){
        new Inner(this).print();
    }

    public String getMsg(){
        return this.msg;
    }
}

class Inner {
    private Oter ot;

    public Inner(Oter ot) {
        this.ot = ot;
    }

    public void print() {
        System.out.println(this.ot.getMsg());
    }
}
public class t03104NeiBuZhuanWaiLei {
    public static void main(String args[]){
        Oter out = new Oter();
        out.fun();
    }
}
