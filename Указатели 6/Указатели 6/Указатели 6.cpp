#include <iostream>
#include <math.h>
using namespace std;
bool Prostoe(int n)
{
    for (int i = 2; i <=sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
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
        a[i] = rand() % 10;
    }
}
int* prost(int* a, int M,bool (*Prostoe)(int))
{
    int k = 0;
    int* a1 = new int[k];
    for (int i = 0; i < M; i++)
    {
        if ((Prostoe)(a[i]) && a[i]!=0)
        {
            a1[k++] = a[i];
        }
    }
    return a1;
}
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int M;
    cout << "Введите длину массива:";
    cin >> M;
    int* a = new int[M];
    Random(a, M);
    Output(a, M);
    int* b=prost(a, M,Prostoe);
    int s = sizeof(b);
    Output(b, s);
    delete[] a;
    delete[] b;
}
