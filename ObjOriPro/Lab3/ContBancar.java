class ContBancar
{
	private double _sold=0;
	public ContBancar(double sold)
	{
		_sold=sold;	
	}

	public void depozitareSuma(double suma)
	{
		_sold+=suma;	
	}
	public double getSold()
	{
		return _sold;
	}
	public boolean retragereSuma(double suma)
	{
		if(_sold>=suma)
		{
		_sold-=suma;
		return true;
		}
		else return false;
	}
	public String toString()
	{
		String msg="Soldul:" + _sold;
		return msg;
	}
}