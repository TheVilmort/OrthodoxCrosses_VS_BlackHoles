#include"Header.h"

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
	unsigned int number;
	char tr;
	
	cout << "\n\n" << "Enter number for change:";
	cin >> number;
	tr = static_cast<char>(number+48);

	system("cls");
		if (0 > number || number > 9)
		{
			system("cls");
			cout << "Number must be less than 10 and greater than 0!Try again!" << "\n";
			ShowBG(vec_str);
			change(vec_str);
		}
		else if (vec_str[number - 1] == "X" || vec_str[number - 1] == "O")
		{
			cout << "This slot is already taken!Try again!" << "\n";
			ShowBG(vec_str);
			change(vec_str);
		}
		else if (value % 2 == 0)
		{
			vec_str[number - 1] = "X";
		}
		else if (value % 2 == 1)
		{
			vec_str[number - 1] = "O";
		}
		
	value++;
	ShowBG(vec_str);
	change(vec_str);
}
int main()
{
	setlocale(LC_ALL,"Rus");
	const int size = 9;
	vector<string> battleGround;
	for (size_t i = 0; i < size; i++)
	{
		battleGround.push_back("-");
	}
	ShowBG(battleGround);
	change(battleGround);
	
	cout << "\n"<<"Game over"<<"\n";

	return 0;
}


	


