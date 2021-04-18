#include <iostream>
#include <string>
using namespace std;
void zamena(string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '.')
		{
			text[i] = '!';
		}
	}
	cout << text;
}
int main()
{
	setlocale(LC_ALL, "ru");
	string text;
	cout << "Введите строку:";
	getline(cin, text);
	zamena(text);
}
