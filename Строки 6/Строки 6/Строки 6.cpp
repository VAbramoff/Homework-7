#include <iostream>
#include <string>
using namespace std;
void schet(string text)
{
	int words = 0;
	int numbers = 0;
	int simvol = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if ((int(text[i]) >= 65 && int(text[i]) <= 90) || (int(text[i]) >= 97 && int(text[i]) <= 122) || (int(text[i]) >= 128 && int(text[i]) <= 175) || (int(text[i]) >= 224 && int(text[i]) <= 241))
		{
			words++;
		}
		if ((int(text[i]) >= 48 && int(text[i]) <= 57))
		{
			numbers++;
		}
		if ((int(text[i]) >= 0 && int(text[i]) <= 47))
		{
			simvol++;
		}
	}
	cout << "Количество букв:" << words << endl;
	cout << "Количество чисел:" << numbers << endl;
	cout << "Количество символов:" << simvol << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	string text;
	cout << "Введите строку:";
	getline(cin, text);
	schet(text);
}