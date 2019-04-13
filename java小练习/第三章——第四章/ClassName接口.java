interface ClassName{
    public abstract String getClassName();
}
class Company implements ClassName{
    public String getClassName(){
        return "Company";
    }

}
public class ClassName接口 {
    public static void main(String[] args) {
        Company com = new Company();
        System.out.println(com.getClassName());
    }
}
