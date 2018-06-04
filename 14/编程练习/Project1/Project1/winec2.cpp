#include"winec2.h"

Wine2::Wine2(const char *l, int y, const int yr[], const int bot[])
	:name(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{}
Wine2::Wine2(const char * l, int y)
	: name(l), PairArray(ArrayInt(y), ArrayInt(y))
{}
void Wine2::GetBottles()
{
	std::cout << "Your can enter in " << ((const PairArray &)*this).first().size() << " years";
	for (unsigned int i = 0; i < ((const PairArray &)*this).first().size(); i++)
	{
		std::cout << "\nyears: ";
		std::cin >> ((const PairArray &)*this).first().operator[](i);
		std::cout << "\nbottles: ";
		std::cin >> ((const PairArray &)*this).second().operator[](i);
	}


}
std::string & Wine2::Label()
{
	return name;
}
int Wine2::sum()
{
	return  ((const PairArray &)*this).second().sum();
}
void  Wine2::show()
{
	using std::cout;
	cout << "wine name: " << name << '\n';
	for (unsigned int i = 0; i < ((const PairArray &)*this).first().size(); i++)
		cout << "wine year: " << ((const PairArray &)*this).first().operator[](i)
		<< " years bottles: " << ((const PairArray &)*this).second().operator[](i) << "\n";

}