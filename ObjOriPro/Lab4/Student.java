public class Student
{
	private String nume;
	private String cnp;
	private static int nrInstante;
	public Student(String nume,String cnp)
	{
		this.nume=nume;
		this.cnp=cnp;
		nrinstante++;
	}
	public static int getNrInstante()
	{
		return nrInstante;
	}
}