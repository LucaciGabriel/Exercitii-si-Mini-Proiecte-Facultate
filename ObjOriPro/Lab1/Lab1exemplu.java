import java.util.Random;
import java.util.Scanner;
class Lab1exemplu
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Introduceti un numar:");
		int n=sc.nextInt();
		System.out.println("Acesta este numarul introdus:" + n);
		Random rnd=new Random();
		for(int i=0;i<n;i++)
		{
			System.out.println("Urmatorul nr:"+ rnd.nextInt(255));	
		}
	}
}