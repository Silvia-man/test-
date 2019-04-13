public class Btest407 {
        public static void main(String args[]) {
            Cer c = new Cer();
            c.test();
        }

    }
class Aer{
    void test() {
        System.out.print("A");
    }
}

class Ber extends Aer {
    void test() {
        super.test();
        System.out.print("B");
    }
}
class Cer extends Ber {
    void test() {
        super.test();
        System.out.println("C");
    }
}

