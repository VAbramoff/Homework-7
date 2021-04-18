#include <iostream>
#include <string>
using namespace std;
void del(string text, int p)
{
	string text1="";	
	for (int i = 0; i < size(text); i++)
	{
		if (i != p)
		{
			text1+= text[i];
		}
	}
	cout << text1;
}
int main()
{
	setlocale(LC_ALL, "ru");
	string text;
	cout << "Введите строку:" << endl;
	getline(cin, text);
	cout << "\nВведите номер символа, который нужно удалить:";
	int p;
	cin >> p;
	p=p - 1;
	del(text, p);
}
