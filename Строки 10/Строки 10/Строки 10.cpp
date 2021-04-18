#include <iostream>
#include <string>
using namespace std;
//Палиндром: рвал дед лавр, коту тащат уток
void palindrom(string text)
{
    string word1="";
    string word2 = "";
    int k = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] != ' ')
        {
            word1 += text[i];            
        }
    }
    for (int j = text.size()-1; j >= 0; j--)
    {
        if (text[j] != ' ')
        {
            word2 += text[j];
        }
    }
    if (word1 == word2)
        cout << "Строка палиндром";
    else
        cout << "Строка не является палиндромом";
}
int main()
{
    setlocale(LC_ALL, "ru");
    string text;
    cout << "Введите строку:";
    getline(cin, text);    
    palindrom(text);
}
