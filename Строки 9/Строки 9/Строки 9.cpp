#include <iostream>
#include <string>
using namespace std;
void schet(string text)
{
	int k = 0;
	for (int i = 0; i < text.size(); i++)
		if (text[i]==' ')
			k++;
	cout << "Количество слов с строке:" << k+1 << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите строку:";
	string text;
	getline(cin, text);
	schet(text);
}

