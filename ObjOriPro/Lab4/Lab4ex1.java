import java.util.Scanner;
import java.util.ArrayList;
public class Lab4ex1
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		ArrayList<Persoana> p=new ArrayList<Persoana>();
		System.out.println("Cate persoane se introduc?");
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			System.out.println("Nume:");
			String auxnume=sc.next();
			System.out.println("Prenume:");
			String auxprenume=sc.next();
			System.out.println("Cnp:");
			String auxcnp=sc.next();
			System.out.println("Anul nasterii:");
			int auxanulnasterii=sc.nextInt();
			p.add(new Persoana(auxnume,auxprenume,auxcnp,auxanulnasterii));
		}
		int suma=0,contor=0;
		for(Persoana i:p)
		{
			suma+=(2022-i.getAnulnasterii());
			contor++;
		}
		System.out.println("Media varstelor este:" + suma/contor);
	}
}