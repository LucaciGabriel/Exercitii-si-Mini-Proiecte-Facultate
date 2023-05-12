import java.lang.Math;
import java.util.Random;
class Lab1ex1
{
	public static void main(String args[])
	{
		int x=Integer.parseInt(args[0]);
		int y=Integer.parseInt(args[1]);
		int suma=x+y;
		System.out.println("Suma=" + suma);
		int produs=x*y;
		int impartire=x/y;
		int rest=x%y;
		System.out.println("Produs=" + produs);
		System.out.println("Impartire=" + impartire);
		System.out.println("Restul impartirii=" + rest);
		Random rnd=new Random();
		int r1=rnd.nextInt(20);
		int r2=rnd.nextInt(20);
		System.out.println( x + " inmultit cu " + r1 + " este egal cu " + x*r1);
		System.out.println( y + " inmultit cu " + r2 + " este egal cu " + y*r2);
	}
}