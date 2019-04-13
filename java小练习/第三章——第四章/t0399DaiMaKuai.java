public class t0399DaiMaKuai {
    private static int num = 100;       //去掉 static 后，下面就需要定义 num 了，去掉private 发现没事
    public static void main(String[] args) {

        //int num = 10;     //重写了num, 不可写成int num;就完了， 重写时也要赋值。
        System.out.println(num);
        new Book1();
    }
    //System.out.println(num);      无法在这里用
}

class Book1 {                                    //上下都能放
    public Book1() {
        System.out.println("构造方法");
    }

    {
        System.out.println("构造块");          //每一次实例化类对象时都会调用构造块，且优于构造方法执行！!!
    }
}
