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
	Candy* snack = new Candy[3];
	(*snack).brand = "Mocha Munch";
	(*(snack+1)).brand = "Nocha Munch";
	(*(snack + 2)).brand = "Locha Munch";

	(*snack).weight = 2.3;
	(*(snack + 1)).weight = 3.3;
	(*(snack + 2)).weight = 4.3;

	(*snack).calorie = 2.3;
	(*(snack + 1)).calorie = 3.3;
	(*(snack + 2)).calorie = 4.3;

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