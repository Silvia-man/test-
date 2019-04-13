//字符串操作：

import java.sql.SQLOutput;

public class 字符串操作 {
    public static void main(String[] args) {
        //从字符串“MLDN中心Java技术学习班20130214”中提取开班日期。
        String str1 = "MLDN中心Java技术学习班20130214";
        System.out.println(str1.substring(str1.indexOf("20130214")));

        //将“MLDN JAVA高端技术培训”字符串中的“JAVA”替换为“JAVA EE”。
        String str2 = "MLDN JAVA高端技术培训" ;
        System.out.println(str2.replaceAll("JAVA", "JAVA EE"));

        //取出“Java技术学习班20130214”中的第八个字符。
        String str3 = "Java技术学习班20130214";
        System.out.println(str3.charAt(7));

        //清除“Java技术学习班20130214”中的所有‘0’。
        String str4 =  "Java技术学习班20130214";
        System.out.println(str4.replaceAll("0",""));    //删除可用replaceAll实现

        //从任意给定的身份证号码中提取此人的出生日期。
        String str5 = "610000190007170000";
        System.out.println(str5.substring(6,14));
    }
}
