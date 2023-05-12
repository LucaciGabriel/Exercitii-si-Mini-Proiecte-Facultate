import java.lang.Math;
import java.util.Scanner;
import java.util.Random;
class Lab1ex2
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Primul numar:");
		int x=sc.nextInt();
		System.out.println("Al doilea numar:");
		int y=sc.nextInt();
		int suma=x+y;
		int produs=x*y;
		int impartire=x/y;
		int rest=x%y;
		System.out.println("Suma=" + suma);
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