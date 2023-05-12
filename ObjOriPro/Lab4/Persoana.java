public class Persoana
{
	private String nume;
	private String prenume;
	private String cnp;
	private int anulnasterii;
	public Persoana(String nume,String prenume,String cnp,int anulnasterii)
	{
		this.nume=nume;
		this.prenume=prenume;
		this.cnp=cnp;
		this.anulnasterii=anulnasterii;
	}
	public String getNume()
	{
		return nume;
	}
	public String getPreume()
	{
		return prenume;
	}
	public String getCnp()
	{
		return cnp;
	}
	public int getAnulnasterii()
	{
		return anulnasterii;
	}
}