package 闲置t02;
public class s020503 {
    public static void main(String[] args) {
        int data = 105;
        if (data % 3 == 0 && data % 5 == 0 && data % 7 == 0) {
            System.out.println(data + "可以同时被3、5、7整除。");
        } else {
            System.out.println(data + "不可以同时被3、5、7整除。");
        }

    }
}
