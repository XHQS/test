#include<iostream>
struct anatarctica_year_end
{
	int year;
};
int main()
{
	anatarctica_year_end s01, s02, s03;
	s01.year = 1998;
	anatarctica_year_end* pa = &s02;
	pa->year = 1999;
	anatarctica_year_end trio[3];
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const anatarctica_year_end* arp[3] = { &s01, &s02, &s03 };
	std::cout << arp[1]->year << std::endl;
	const anatarctica_year_end **ppa = arp;
	auto ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb + 1))->year << std::endl;
	system("PAUSE");

}