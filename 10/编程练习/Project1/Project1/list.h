#ifndef LIST_H_
#define LIST_H_
const int Full = 5;
class List
{
private:
	int index[Full] ;
public:
	List();
	void add(int n);
	bool li_isfull();
	bool li_isempty();
	void visit(void(*pf)(int &));
};
#endif