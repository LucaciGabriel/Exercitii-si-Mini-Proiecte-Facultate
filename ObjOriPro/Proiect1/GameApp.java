import java.util.Scanner;
public class GameApp
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Introduceti numarul maxim de jocuri ce se vor putea insera:");
		int n=sc.nextInt();
		Game list[]=new Game[n];
		int index=0,opt=0,stop=0;
		while(stop!=1)
		{
			System.out.println("Alegeti optiunea dorita:\n1.Introducere joc nou\n2.Gasire joc dupa nume\n3.Afisare medie preturi\n4.Afisare joc cu cel mai bun rating\n5.Oprire program");
			opt=sc.nextInt();
			switch(opt)
			{
				case 1:
				{
					if(index<n)
					{
					String auxname;
					System.out.println("Nume:");
					auxname=sc.next();
					double auxrating;
					System.out.println("Rating:");
					auxrating=sc.nextDouble();
					double auxprice;
					System.out.println("Pret:");
					auxprice=sc.nextDouble();
					list[index++]=new Game(auxname,auxrating,auxprice);
					break;
					}
					else {System.out.println("Nu se mai pot introduce jocuri");break;}
				}
				case 2:
				{
					String searchname;
					System.out.println("Introduceti numele jocului cautat:");
					searchname=sc.next();
					boolean ok=false;
					for(int i=0;i<list.length && ok!=true;i++)
					{
						if(list[i]!=null && list[i].getName().equals(searchname))
						{
							System.out.println("A fost gasit\n");
							System.out.println(list[i].toString());
							ok=true;
						}
					}
					break;
				}
				case 3:
				{
					int i=0;
					double sum=0;
					for(i=0;i<list.length && list[i]!=null;i++)
					{
						sum+=list[i].getPrice();
					}
					System.out.println("Media preturilor este:" + sum/i);
					break;
				}
				case 4:
				{
					String auxname=" ";
					double maxrating=0;
					for(int i=0;i<list.length && list[i]!=null;i++)
					{
						if(maxrating<list[i].getRating())
						{
							maxrating=list[i].getRating();
							auxname=list[i].getName();
						}
					}
					System.out.println("Jocul cu cel mai bun rating este " + auxname + " cu ratingul de " + maxrating);
					break;
				}
				case 5:
				{
					stop=1;
					break;
				}
			}
		}
	}
}