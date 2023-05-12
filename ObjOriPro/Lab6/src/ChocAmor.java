public class ChocAmor extends CandyBox{

    private float length;

    public ChocAmor() {
        length=0;
    }

    public ChocAmor(String flavor, String origin, float length) {
        super.setFlavor(flavor);
        super.setOrigin(origin);
        this.length=length;
    }

    public float getVolume() {
        return length*length*length;
    }

    public String toString() {
        String msg="Aroma: " + super.getFlavor();
        msg+=" Origine: " + super.getOrigin();
        msg+=" Volum: " + getVolume();
        return msg;
    }
}
