#include<iostream>
#include<string>
#include<map>
#include<algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main()
{
	using namespace std;
	MapCode codes;
	
	codes.insert(Pair(415,"A"));
	codes.insert(Pair(510,"B"));
	codes.insert(Pair(718,"C"));
	codes.insert(Pair(718,"D"));
	codes.insert(Pair(415, "E"));
	codes.insert(Pair(510, "F"));

	cout << "Number of cities with area code 415: "
		<< codes.count(415) << endl;
	cout << "Number of cities with area code 718: "
		<< codes.count(718) << endl;
	cout << "Number of cities with area code 510: "
		<< codes.count(510) << endl;
	cout << "Area Code    City\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); it++)
		cout << "	" << (*it).first << "	"
		<< (*it).second << endl;

	pair<MapCode::iterator, MapCode::iterator> range
		= codes.equal_range(718);
	cout << "Cities with area code 718:\n";
	for (it = range.first; it != range.second; it++)
		cout << (*it).second << endl;
	system("pause");
}