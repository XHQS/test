#include"queue.h"
template <typename T>
Queue::Queue()
{}

template <typename T>
void Setqueue(char ch,int ct)
{
	switch (ch)
	{
	case 'w': lolas[ct] = new T; break;
	case 's':lolas[ct] = new Singer; break;
	case 't':lolas[ct] = new SingingWaiter; break;
	}
	cin.get();
	lolas[ct]->Set();

}

template <typename T>
void show()
{}