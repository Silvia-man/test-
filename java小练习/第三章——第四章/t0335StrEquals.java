import sun.awt.geom.AreaOp;

public class t0335StrEquals {
    public static void main(String[] args) {
        String stra = "hello";
        String strb = new String("hello");
        String strc = stra;

        System.out.println(stra.equals(strb));
        System.out.println(stra.equals(strc));
        System.out.println(strb.equals(strc));
        System.out.println(stra.equals("hello"));               //  值比较

        System.out.println(stra == strb);
        System.out.println(stra == strc);
        System.out.println(strb == strc);

        System.out.println(stra == "hello");                    //!!
        System.out.println(strb == "hello");                   //  地址比较

          //再次理解
        String strd, stre, strf;
        strd = "ui";
        stre = strd;
        strf = "ui";
        System.out.println(strd == "ui");
        System.out.println(stre == "ui");
        System.out.println(strf == "ui");    //strd, stre, strf指向了同一块空间
    }

}
