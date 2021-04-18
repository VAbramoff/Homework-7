#include <iostream>
#include <string>
using namespace std;
void  del(string text, char n)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] != n)
			cout << text[i];
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	string text;	
	cout << "Введите строку:" << endl;
	getline(cin, text);
	char n;
	cout << "Введите символ, который нужно удалить:";
	cin >> n;
	del(text, n);
}
