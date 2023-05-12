#include"CoadaStatica.h"
#include<iostream>
using namespace std;

Queue::Queue(int maxim)
{
	this->maxim = maxim;
	this->top=0;
	this->bot=0;
	this->vec=new int[maxim];
}
void Queue::enqueue(int x)
{
	if (isfull()) cout << "Coada este plina";
	else
	{
		this->vec[top] = x;
		this->top++;
	}
}
int	Queue::dequeue()
{
	if (isempty()) {cout << "Coada este goala"; return 0;}
	else
	{
		int ret = this->vec[this->bot];
		this->bot = this->bot + 1;
		return ret;
	}
}
int Queue::peek()
{
	if (isempty()) return -1;
	else return this->vec[this->top];
}
bool Queue::isempty()
{
	if (this->top == this->bot) return true;
	else return false;
}
bool Queue::isfull()
{
	if (this->top - this->bot == this->maxim) return true;
	else return false;
}
void Queue::print()
{
	for (int i = bot; i < top; ++i) {
		cout << this->vec[i] << " ";
	}
	cout<<endl;
}
