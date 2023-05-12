public class Baravelli extends CandyBox{
    private static final float ValoarePi=3;

    private float radius;

    private float height;

    public Baravelli() {
        radius=0;
        height=0;
    }

    public Baravelli(String flavor, String origin, float radius, float height) {
        super.setFlavor(flavor);
        super.setOrigin(origin);
        this.radius=radius;
        this.height=height;
    }

    public float getVolume() {
        return radius*radius*ValoarePi*height;
    }

    public String toString() {
        String msg="Aroma: " + super.getFlavor();
        msg+=" Origine: " + super.getOrigin();
        msg+=" Volum: " + getVolume();
        return msg;
    }
}
