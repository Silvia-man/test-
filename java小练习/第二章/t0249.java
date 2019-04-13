public class t0249 {
    public static void main(String args[]){
        double score = 91.0;
        if(score < 60){
            System.out.println("小白的成绩！");
        }else if(score >= 60 && score <= 90){
            System.out.println("中等成绩");
        }else if(score >= 90 && score<= 100){
            System.out.println("优秀成绩");
        }else{
            System.out.println("你家的考试成绩怎么这么怪异！");
        }
    }
}
