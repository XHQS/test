#include<iostream>
#include<cctype>
#include<string>
#include<cstring>
int main()
{
	using namespace std; 
	cout << "Enter words (q to quit): ";
	string ch;
	int alpha_v_num = 0;
	int alpha_c_num = 0;
	int other_num = 0;
	do {
		bool key;
		cin >> ch;
		for (int i = 0; i < int(ch.length()); i++)
		{
			if (ispunct(ch[i]))
				continue;
			if (isalpha(ch[i]))
				key = true;
			else
				key = false;
		}
		if (key == true)
			switch (ch[0])
			{
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':alpha_v_num++; break;
			default:alpha_c_num++; break;
			}	
		else
			other_num++;

	}while(ch != "q");

	cout << endl << alpha_v_num  << " words beginning with vowels\n";
	cout << alpha_c_num - 1 << " words beginning with consonants\n";
	cout << other_num << " others";
	system("pause");
}