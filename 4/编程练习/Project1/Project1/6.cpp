#include<iostream>
#include<string>
struct Candy
{
	std::string brand;
	double weight;
	int calorie;
};

int main()
{
	using namespace std;
	Candy snack[3] = { { "Mocha Munch", 2.3, 350 },
						{ "Nocha Nunch", 2.4, 450 }, 
						{ "Locha Lunch", 2.5, 550 } 
					};

	cout << "Brand: " << snack[0].brand << endl;
	cout << "Weight: " << snack[0].weight << endl;
	cout << "Calorie: " << snack[0].calorie << endl << endl;

	cout << "Brand: " << snack[1].brand << endl;
	cout << "Weight: " << snack[1].weight << endl;
	cout << "Calorie: " << snack[1].calorie << endl << endl;

	cout << "Brand: " << snack[2].brand << endl;
	cout << "Weight: " << snack[2].weight << endl;
	cout << "Calorie: " << snack[2].calorie << endl;
	system("PAUSE");

}