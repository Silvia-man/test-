//	定义并测试一个代表员工的Employee类。员工属性包括“编号”、“姓名”、“基本薪水”、“薪水增长额”；
// 还包括 “计算增长后的工资总额”。的操作方法。定义并测试一个代表员工的Employee类。员工属性包括“编号”
// 、“姓名”、 “基本薪水”、“薪水增长额”；还包括 “计算增长后的工资总额”。的操作方法。

public class Employee类 {
    public static void main(String[] args) {
        Employee2 em = new Employee2(1,"张三",3000, 100);
        System.out.println(em);
    }
}
class Employee2{
    private int num;
    private String name;
    private int  Salary = 3000;
    private int impSalary;
    public Employee2(){
    }
    public Employee2(int num, String name, int Salary, int impSalary ){
        super();
        this.num = num;
        this.name = name;
        this.impSalary = impSalary;
        this.Salary += impSalary;
    }
    public String toString(){
        return "序号： " + this.num + "   姓名： " + this.name + "   基本工资: " + this.Salary;
    }
}