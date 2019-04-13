public class address类 {
    public static void main(String[] args) {
        Address ad = new Address("中国", "北京", "北京市", "MLDN", "100088");
        ad.setNation("China");
        System.out.println(ad);

    }
}
class Address{
    private String nation;
    private String province;
    private String city;
    private String street;
    private String zipcode;

    public Address(){
    }
    public Address(String nation, String province, String city, String street, String zipcode){
        super();                                                                                    
        this.nation = nation;                                                                       
        this.province = province;                                                                   
        this.city = city;
        this.street = street;                                                                       
        this.zipcode = zipcode;                                                                     
    }                                                                                               

    public void setNation(String nation) {
        this.nation = nation;
    }

    public void setProvince(String province) {
        this.province = province;
    }

    public void setCity(String city) {
        this.city = city;
    }

    public void setStreet(String street) {
        this.street = street;
    }

    public void setZipcode(String zipcode) {
        this.zipcode = zipcode;
    }

    public String getNation() {
        return nation;
    }

    public String getProvince() {
        return province;
    }

    public String getCity() {
        return city;
    }

    public String getStreet() {
        return street;
    }

    public String getZipcode() {
        return zipcode;
    }

    public String toString(){
        return "国家：" + getNation() + "  省份：" + getProvince() + "    城市：" + getCity() + "    街道：" + getStreet() + "  邮编：" + getZipcode();
    }
}