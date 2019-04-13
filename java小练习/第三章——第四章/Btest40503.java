public class Btest40503 {
    public static void main(String args[]) {
        Employee ea = new Manager("w", 20, '女', "总监", 20000.0);
        Employee eb = new Staff("l", 25, '男', "业务部", 1500.0);
        System.out.println(ea);
        System.out.println(eb);
    }
}
class Employee {
    private String name ;
    private int age ;
    private char sex ;
    public Employee() {
    }
    public Employee(String name, int age, char sex) {
        this.name = name;
        this.age = age;
        this.sex = sex;
    }
    public String toString() {
        return "雇员姓名：" + this.name + "，年龄：" + this.age + "，性别：" + this.sex;
    }

}
class Manager extends Employee {
    private String job ;
    private double income ;
    public Manager() {
    }
    public Manager(String name, int age, char sex, String job, double income) {
        super(name, age, sex);
        this.job = job;
        this.income = income;
    }
    public String toString() {
        return super.toString() + "，职位：" + this.job + "，年薪：" + this.income ;
    }

}
class Staff extends Employee {
    private String dept ;
    private double salary ;
    public Staff() {
    }
    public Staff(String name, int age, char sex, String dept, double salary) {
        super(name, age, sex);
        this.dept = dept;
        this.salary = salary;
    }
    public String toString() {
        return super.toString() + "，部门：" + this.dept + "，月薪：" + this.salary ;
    }

}
