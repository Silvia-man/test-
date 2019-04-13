class Book{
    private String title;
    private double price;
    public Book(String title,double price){
        this.title = title;
        this.price = price;
    }
    public boolean compare(Book book){      //比较操作
        if(book == null){
            return false;
        }
        if(this == book){
            return true;
        }
        if(this.title.equals(book.title)
            && this.price == book.price){
            return true;
        }else{
            return false;
        }
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getTitle() {
        return title;
    }
    public double getPrice() {
        return price;
    }

    public String getInfo(){
        return "图书名称：" + this.title + ",图书价格：" + this.price ;
    }
}
class Link{
    private class Node{
        private Book data;
        private Node next;
        public Node(Book data){
            this.data = data;
        }
        public void addNode(Node newNode){
            if(this.next == null) {
                this.next = newNode;
            }else{
                this.next.addNode(newNode);
            }
        }
        public  boolean containsNode(Book data){
            if(data.compare(this.data)){
                return true;
            }else{
                if(this.next != null){
                    return this.next.containsNode(data);
                }else{
                    return false;
                }
            }
        }
        public Book getNode(int index){
            if(Link.this.foot++ ==index){
                return this.data;
            }else{
                return this.next.getNode(index);
            }
        }
        public void setNode(int index, Book data){
            if(Link.this.foot++ ==index){
                this.data = data;
            }else{
                this.next.setNode(index,data);
            }
        }
        public void removeNode(Node previous, Book data){
            if(data.compare(this.data)){
                previous.next = this.next;
            }else{
                this.next.removeNode(this,data);
            }
        }
        public void toArrayNode(){
            Link.this.retArray[Link.this.foot++] = this.data;  //data是内部类属性，this.不能去掉；retArray是外部类，需要Link.去掉Link.this.好像可以！
            if(this.next != null){
                this.next.toArrayNode();
            }
        }
    }
    private Node root;
    private int count = 0;
    private int foot = 0;
    private Book[]retArray;
    public void add(Book data){
        if(data == null){
            return;
        }
        Node newNode = new Node(data);
        if(this.root == null){
            this.root = newNode;
        }else{
            this.root.addNode(newNode);
        }
        this.count ++;
    }
    public int size(){
        return this.count;
    }
    public boolean isEmpty(){
        return this.count == 0;
    }
    public boolean contains(Book data){
        if(data == null || this.root == null){
            return false;
        }
        return this.root.containsNode(data);
    }

    public Book get(int index){
        if(index > this.count){
            return null;
        }
        this.foot = 0;
        return this.root.getNode(index);
    }
    public void set(int index, Book data){
        if(index > this.count){
            return;
        }
        this.foot = 0;
        this.root.setNode(index,data);
    }
    public void remove(Book data){
        if(this.contains(data)){
            if(data.equals(this.root.data)){
                this.root = this.root.next;
            }else{
                this.root.next.removeNode(this.root,data);
            }
            this.count--;
        }
    }
    public Book[] toArray(){
        if(this.root == null){
            return null;
        }
        this.foot = 0;
        this.retArray = new Book[this.count];
        this.root.toArrayNode();
        return this.retArray;
    }
    public void clear(){
        this.root = null;
        this.count = 0;
    }
}

