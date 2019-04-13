class Person{
    private String name;
    private String address;
    private char sex;
    private int age;
    public Person(){
    }
    public Person(String name, String address, char sex, int age){
        super();
        this.name = name;
        this.address = address;
        this.sex = sex;
        this.age = age;
    }
    public String toString(){
        return "姓名：" + this.name + "，地址：" + this.address + "，性别：" + this.sex
                + "，年龄：" + this.age;

    }
}
class Student extends Person{
    private double math;
    private double english;
    public Student(){
    }
    public Student(String name, String address, char sex, int age, double math, double english){
        super(name, address, sex, age);
        this.math = math;
        this.english = english;
    }
    public String toString() {
        return super.toString() + "，数学成绩：" + this.math + "，英语成绩：" + this.english;
    }
}

public class Person类和Student类 {
    public static void main(String[] args) {
        Student stu = new Student("九九", "西安市长安区", '女', 18, 90.0, 99.0);
        System.out.println(stu);

    }
}
