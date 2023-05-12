public class CandyBox {
    private String flavor;
    private String origin;

    public CandyBox() {
        flavor="";
        origin="";
    }

    public CandyBox(String flavor,String origin) {
        this.flavor=flavor;
        this.origin=origin;
    }

    public float getVolume() {
        return 0;
    }
    public String getFlavor() {
        return flavor;
    }
    public String getOrigin() {
        return origin;
    }
    public void setFlavor(String flavor) {
        this.flavor=flavor;
    }
    public void setOrigin(String origin) {
        this.origin=origin;
    }

    public String toString() {
        String msg="Aroma: " + flavor;
        msg+="Origine: " + origin;
        return msg;

    }
    
    public boolean Equals(CandyBox c) {
        return (this==c);
    }

}
