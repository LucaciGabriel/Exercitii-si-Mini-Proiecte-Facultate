public class Logging {
    private static Logging instance;

    private Logging(){}
    public static Logging getInstance()
    {
        if(instance==null)
        {
            instance=new Logging();
        }
        return instance;
    }
    public void setLog(String msg)
    {
        System.out.println(msg);
    }
}
