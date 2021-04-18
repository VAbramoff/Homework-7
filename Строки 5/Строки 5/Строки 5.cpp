#include <iostream>
#include <string>
using namespace std;
void poisk(string text,char n)
{
	int schet = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == n)
		{
			schet++;
		}
	}
	cout << "Количество повторений символа " << n << ":" << schet;
}
int main()
{
	setlocale(LC_ALL, "ru");
	string text;
	cout << "Введите строку:";
	getline(cin, text);
	cout << "Искомый символ:";
	char n;
	cin >> n;
	poisk(text,n);
}