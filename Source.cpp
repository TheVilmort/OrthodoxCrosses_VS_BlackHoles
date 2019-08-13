#include<iostream>
#include<string>
#include<vector>
using namespace std;

int value=0;

void ShowBG(vector<string> vec_str)
{
	for (size_t i = 0; i < vec_str.size(); i++)
	{
		if (i % 3 == 0)
		{
			cout << "\n";
		}
		cout << vec_str[i];
	}
}
void change(vector<string> vec_str)
{
	string str_number;
	size_t number;

	cout << "\n\n" << "Enter number for change:";
	cin >> str_number;

	system("cls");



	// Input size check.
	if (str_number.size() != 1)
	{
		cout << "Incorrect enter size! Try again!" << "\n";
		ShowBG(vec_str);
		change(vec_str);
	}

	// Number/character input check.
	if (isdigit(str_number[0]))
	{	
		number = atoi(str_number.c_str());
	}
	else if (!(isdigit(str_number[0])))
	{
		cout << "You enterd a character, not a number!Try again!" << "\n";
		ShowBG(vec_str);
		change(vec_str);
	}
		
		// Number value check.
		if (9 < number || number <= 0)
		{
			system("cls");
			cout << "Number must be less than 10 and greater than 0!Try again!" << "\n";
			ShowBG(vec_str);
			change(vec_str);
		}
		else if (vec_str[number - 1] != "-")
		{
			cout << "This slot is already taken!Try again!" << "\n";
			ShowBG(vec_str);
			change(vec_str);
		}
		//Slot change to X/O
		else if (!(value % 2))
		{
			vec_str[number - 1] = "X";
		}
		else if (value % 2)
		{
			vec_str[number - 1] = "O";
		}

		++value;
		if (value!=9)
		{
			ShowBG(vec_str);
			change(vec_str);
		}
		else
		{
		
		}
}
int main()
{
	setlocale(LC_ALL, "Rus");

	vector<string> battleGround(9, "-");

	ShowBG(battleGround);
	change(battleGround);

	cout << "\n"<<"Game over!"<<"\n";

	return 0;
}


	

	





