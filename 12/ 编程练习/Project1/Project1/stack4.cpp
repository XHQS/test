#include"stack4.h"
Stack::Stack(int n)
{
	pitems = new Item[];
	size = 0;
	top = n;
}
Stack::Stack(const Stack & st)
{
	pitems = new Item[st.top + 1];
	for (int i = 0; i < st.size; i++)
		pitems[i] = st.pitems[i];
	pitems[st.size] = '\0';
	top = st.top;
	size = st.size;
}
Stack::~Stack()
{
	delete[] pitems;
}
bool Stack::isempty()const
{
	if (size == 0)
		return true;
	return false;
}
bool Stack::isfull()const
{
	if (size == top)
		return true;
	return false;
}
bool Stack::push(const Item & item)
{
	if (this->isfull())
		return false;
	pitems[size] = item;
	size++;
	return true;
}
bool Stack::pop(Item & item)
{
	if (this->isempty())
		return false;
	item = pitems[size];
	pitems[size] = '\0';
	size--;
	return true;
}
Stack & Stack::operator=(const Stack & st)
{
	pitems = new Item[st.top + 1];
	for (int i = 0; i < st.size; i++)
		pitems[i] = st.pitems[i];
	pitems[st.size] = '\0';
	top = st.top;
	size = st.size;
	return (*this);
}