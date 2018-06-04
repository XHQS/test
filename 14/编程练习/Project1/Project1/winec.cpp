#include"winec.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
	:name(l), data(ArrayInt(yr, y), ArrayInt(bot, y))
{}
Wine::Wine(const char * l, int y)
	: name(l), data(ArrayInt(y), ArrayInt(y))
{}
void Wine::GetBottles()
{
	std::cout << "Your can enter in " << data.first().size() << " years";
	for (unsigned int i = 0; i < data.first().size(); i++)
	{
		std::cout << "\nyears: " ;
		std::cin >> data.first().operator[](i);
		std::cout << "\nbottles: " ;
		std::cin >> data.second().operator[](i);
	}


}
std::string & Wine::Label()
{
	return name;
}
int Wine::sum()
{
	return data.second().sum();
}
void  Wine::show()
{
	using std::cout;
	cout << "wine name: " << name << '\n';
	for (unsigned int i = 0; i < data.first().size(); i++)
		cout << "wine year: " << data.first().operator[](i)
		<< " years bottles: " << data.second().operator[](i) << "\n";

}