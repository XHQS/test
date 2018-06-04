#include<iostream>
#include<string>
#include<vector>
struct Review
{
	std::string titles;
	int rating;
};
bool FillReview(Review & rr);
void ShowReview(const Review & rr);
int main()
{
	using std::cout;
	using std::vector;
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);//add a new element at the end
	int num = books.size();
	if (num > 0)
	{
		cout << "Thank you. You entered the following:\n"
			<< "Rating\tBook\n";
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		cout << "Reprising:\n";//copy
		vector<Review>::iterator pr;//pr is a interator
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		vector<Review> oldlist(books);
		if (num > 3)
		{
			//remove 2 items
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "After erasure:n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "After insertion:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
		}
		books.swap(oldlist);
		cout << "Swaping oldlist with books\n";
		for (pr=books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
	}
	else
		cout << "Nothing entered, nothing gained.\n";
	system("pause");
}
bool FillReview(Review & rr)
{
	std::cout << "Enter book title (q to quit):";
	std::getline(std::cin, rr.titles);
	if (rr.titles == "q")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const Review & rr)
{
	std::cout << rr.rating << "\t" << rr.titles << std::endl;
}