public class 统计次数 {
    public static void main(String[] args) {
        String str = "want you to know one thing" ;
        int sum = 0 ;
        while (str.indexOf("n") != -1) {
            sum ++ ;
            str = str.substring(str.indexOf("n") + 1);
        }
        System.out.println("字母n的出现次数：" + sum);

    }

}
