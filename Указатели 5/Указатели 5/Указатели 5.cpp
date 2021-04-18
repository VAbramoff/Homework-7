#include <iostream>
using namespace std;
void menu()
{
    cout << "1.Удалить из массива нечетные значения"<<endl;
    cout << "2.Удалить из массива четные значения" << endl;
}
bool chet(int b)
{
    return b % 2 == 0;
}
bool nechet(int b)
{
    return b % 2 != 0;
}
void ChetOrNechet(int* a, int* a1, int& k, int& M, bool(*ChetNechet)(int))
{
    for (int i = 0; i < M; i++)
    {
        if ((ChetNechet)(a[i]))
        {
            k++;
        }
    }
    int j = k;
    k = 0;
    for (int i = 0; i < M; i++)
    {
        if (k < j && (ChetNechet)(a[i]))
            a1[k++] = a[i];
    }
}
void Output(int* a, int M)
{
    for (int i = 0; i < M; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
void Random(int* a, int M)
{
    for (int i = 0; i < M; i++)
    {
        a[i] = rand() % 100;
    }
}
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int M,key;
    int k = 0;
    cout << "Введите длину массива:";
    cin >> M;
    int* a1 = new int[M];
    int* a = new int[M];
    Random(a, M);
    Output(a, M);
    menu();
    cin >> key;
        switch (key)
        {
        case 1:
        {
            ChetOrNechet(a, a1, k, M, chet);
            Output(a1, k);
            break;
        }
        case 2:
        {
            ChetOrNechet(a, a1, k, M, nechet);
            Output(a1, k);
            break;
        }
        }
}
