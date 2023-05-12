#pragma once
#ifndef COADASTATICA_H_INCLUDED
#define COADASTATICA_H_INCLUDED
using namespace std;
class Queue{
private:
	int* vec;
	int top;
	int bot;
	int maxim;
public:
	Queue(int maxim);
	virtual void enqueue(int);
	virtual int dequeue();
	virtual int peek();
	virtual bool isempty();
	virtual bool isfull();
	virtual void print();
};

#endif
#pragma once
