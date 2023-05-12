import java.util.Random;
class Lab3ex
{
	public static void main(String args[])
	{
		ContBancar cont=new ContBancar(100);
		cont.depozitareSuma(50);
		cont.depozitareSuma(25);
		System.out.println(cont.toString());
		boolean ok=cont.retragereSuma(25);
		System.out.println(cont.toString());
		Random rnd=new Random();
		for (int i=0;i<rnd.nextInt(1000);i++)
		{
			Random opt=new Random();
			if(opt.nextInt(1)==1)
			{
				cont.depozitareSuma(1);
				
			}
			else	cont.retragereSuma(1);
		}
	}
}