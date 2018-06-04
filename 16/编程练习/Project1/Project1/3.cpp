#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<fstream>
#include<vector>
/*使用重载函数operator[]或者迭代器进行随机的读取
vector:就像是一个数组一样，非常方便
*/
const int NUM = 26;
int main()
{
	using namespace std;
	vector<string> file_words;
	string cache;
	char filename[] = "test.txt";
	std::ifstream infile;
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program  terminating.\n";
		exit(EXIT_FAILURE);
	}
	infile >> cache;
	while (infile.good())
	{
		file_words.push_back(cache);
		infile >> cache;
	}
	if (infile.eof())
		cout << "file successfully read.\n";
	else if (infile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";

	infile.close();
	
	
	//std::vector<string>::iterator a = file_words.begin();
	std::srand(std::time(0));
	char play;
	cout << "Will you play a word game?<y,n>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = file_words[std::rand() % NUM]/* *(a+std::rand() % NUM)*/;
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my sercet word.. It  has " << length
			<< " letters, and you  guess\n"
			<< "one letter at a time. You get " << guesses
			<< " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh,bad guess\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << " Good guess!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << " bad guesses left\n";
			}
		}
		if (guesses > 0)
			cout << "Taht's right \n";
		else
			cout << "Sorry ,the word is " << target << ".\n";
		cout << "Will you play another ?<y,n>";
		cin >> play;
		play = tolower(play);

	}
	cout << "Bye";
	system("pause");
}