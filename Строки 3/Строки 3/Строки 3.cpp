#include <iostream>
#include <string>
using namespace std;
void dob(string text, char n, int s)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (i == s)
        {
            text[i] = n;
        }
    }
    cout << text;
}
int main()
{
    setlocale(LC_ALL, "ru");
    string text;
    cout << "Ввведите строку:\n";
    getline(cin, text);
    cout << "Введите символ:\n";
    char n;
    cin >> n;
    cout << "Введите место:\n";
    int s;
    cin >> s;
    s = s - 1;
    dob(text, n, s);
}