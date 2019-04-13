public class t03112NeiBuLeiFangfaZhong {
    public static void main(String[] args) {
        new Outer2().fun(100);
    }
}
class Outer2{
    private String msg = "hello";
    public void fun(final int num){
        final double score = 99.9;
        class Inner2{
            public void print(){
                System.out.println("属性："+ Outer2.this.msg);
                System.out.println("方法参数：" + num);
                System.out.println("方法变量：" + score);

            }
        }
        new Inner2().print();
    }
}
