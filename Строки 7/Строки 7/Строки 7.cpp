#include <iostream>
#include <string>
using namespace std;
void prob(string text)
{
    for (int i = 0; i < text.size(); i++)
        if (text[i] == ' ')
            text[i] = '\t';
    cout << text;
}
int main()
{
    setlocale(LC_ALL, "ru");
    string text;
    cout << "Введите строку:";
    getline(cin, text);
    prob(text);
}
