//定义类Shape表示一般二维图形。Shape具有抽象方法area和perimeter，分别计算形状的面积和周长。
// 试定义一些二维形状类（如矩形、三角形、圆形等），这些类均为Shape类的子类。
abstract class Shape{
    public abstract double area();
    public abstract double perimeter();
}
class Rectangle extends Shape {			// 矩形
    private double wide ;				// 宽
    private double longs ;				// 长
    public Rectangle() {
    }
    public Rectangle(double wide, double longs) {
        super();
        this.wide = wide;
        this.longs = longs;
    }
    public double area() {
        return this.longs * this.wide ;
    }
    public double perimeter() {
        return (this.longs + this.wide) * 2;
    }
}
class Round extends Shape {						// 圆形
    private double radius ;						// 半径
    public Round() {
    }
    public Round(double radius) {
        super();
        this.radius = radius;
    }
    public double area() {
        return this.radius * this.radius * Math.PI;
    }
    public double perimeter() {
        return this.radius * 2 * Math.PI;
    }
}


public class Shape类 {
    public static void main(String[] args) {
        Shape rectangle = new Rectangle(10.5, 20.6);
        Shape round = new Round(30.3);
        System.out.println("矩形面积：" + rectangle.area() + "，矩形周长：" + rectangle.perimeter());

        System.out.println("圆形面积：" + round.area() + "，圆形周长：" + round.perimeter());
    }
}
