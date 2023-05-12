#include"CoadaStatica.h"
#include<iostream>
using namespace std;
int main()
{
    Queue coada(3);
    coada.enqueue(10);
    coada.enqueue(20);
    coada.enqueue(30);
    coada.print();
    coada.dequeue();
    coada.print();
    return 0;
}
