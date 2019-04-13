public class t0252 {
    public static void main(String args[]){
        String str = "HELLO";
        switch(str){
            case "HELLO":{
                System.out.println("内容是HELLO");
            break;
            }
            case "hello":{
                System.out.println("内容是hello");
                break;
            }
            case "mldn":{
                System.out.println("内容是mldn");
                break;
            }
            default:{
                System.out.println("没有匹配内容");
                break;
            }
        }
    }
}
