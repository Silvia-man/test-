//设计一个Dog类，有名字、颜色、年龄等属性，定义构造方法来初始化类的这些属性，
// 定义方法输出Dog信息。编写应用程序使用Dog类。
public class Dog类 {
    public static void main(String[] args) {
        Dog dog = new Dog("贝贝", "白色",8);
        System.out.println(dog);
    }
}
class Dog{
    private String name;
    private String color;
    private int year;
    public Dog(){
    }
    public Dog(String name, String color, int year){
        super();
        this.name = name;
        this.color = color;
        this.year = year;
    }
    public String toString(){
        return this.name + this.color + this.year;
    }
}