package Gamepackage;

public class Game
{
	private String name;
	private double rating;
	private double price;
	public Game()
	{
		name=null;
		rating=0;
		price=0;
	}
	public Game(String name,double rating,double price)
	{
		this.name=name;
		this.rating=rating;
		this.price=price;
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public void setRating(double rating)
	{
		this.rating=rating;
	}
	public void setPrice(double price)
	{
		this.price=price;
	}
	public String getName()
	{
		return name;
	}
	public double getRating()
	{
		return rating;
	}
	public double getPrice()
	{
		return price;
	}
	public String toString()
	{
		String msg="Nume: " + name;
		msg+=" Rating: " + rating;
		msg+=" Pret: " + price;
		return msg;
	}
	
}