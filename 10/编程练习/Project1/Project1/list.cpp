#include"list.h"
List::List()
{
	(*this).index[0] = 1;
}
void List::add(int n)
{
	int i;
	for (i = 0; i < Full; i++)
		if (this->index[i] != 0)
			break;
	this->index[i] = n;
}
bool List::li_isempty()
{
	if (this->index[0] == 0)
		return true;
	else
		return false;
}
bool List::li_isfull()
{
	if (this->index[Full - 1] != 0)
		return true;
	else
		return false;
}
void List::visit(void(*pf)(int & ))
{
	for (int i = 0; i < Full&&this->index[i] != 0; i++)
		(*pf)(index[i]);
}