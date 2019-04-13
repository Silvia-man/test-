package 闲置t02;

public class s020501 {
    public static void main(String[] args) {
        int  a , b , c, x;

        for(x = 100;x < 1000;x++){
            a = x % 10;
            b =( x / 10)%10;
            c = x/100;
            if( x ==( a * a * a + b * b * b + c * c * c )){
                System.out.print(x + ",");
            }
        }
    }



}
