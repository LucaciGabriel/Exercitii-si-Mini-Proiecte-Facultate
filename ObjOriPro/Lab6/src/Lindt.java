public class Lindt extends CandyBox{
    private float length;
    private float width;
    private float height;

    public Lindt() {
        length=0;
        width=0;
        height=0;
    }

    public Lindt(String flavor, String origin, float length, float width, float height) {
        super.setFlavor(flavor);
        super.setOrigin(origin);
        this.length=length;
        this.width=width;
        this.height=height;
    }

    public float getVolume() {
        return length*width*height;
    }

    public String toString() {
        String msg="Aroma: " + super.getFlavor();
        msg+=" Origine: " + super.getOrigin();
        msg+=" Volum: " + getVolume();
        return msg;
    }
}
