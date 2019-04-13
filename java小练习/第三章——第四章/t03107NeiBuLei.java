class Outer{
    private String msg = "hello world";
    class Inner{
        public void print(){
            System.out.println(Outer.this.msg);     //  外部类.this = 外部类的当前对象
        }
    }
}
public class t03107NeiBuLei {
    public static void main(String[] args) {
        Outer.Inner in = new Outer().new Inner();       //  外部实例化
        in.print();
    }

}


