#include <iostream>
using namespace std;
void matrix(int* a, int d)
{
    for (int i = 0; i < d; i++)
    {
        a[i] = rand() % 100;
    }
}
void output(int* a, int d)
{
    for (int i = 0; i < d; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
void sbor(int* a1, int d1, int* a2, int d2)
{
	int k = 0;
	int n = 0;
	int* a3 = new int[d1 + d2];
	int* a4 = new int[k];
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; j++)
		{
			if (a1[i] == a2[j])
				a3[k++] = a1[i];
		}		
	}
    for (int i = 0; i < k; i++)
    {
        int j = i;
        for (j; j < k; j++)
        {
            if (a3[i] > a3[j])
            {
                swap(a3[i], a3[j]);
            }
        }
    }    
    for (int i = 0; i < k; i++)
    {      
        if (a3[i] != a3[i + 1])
        {
            a4[n] = a3[i];
            n++;
        }        
    }
    for (int i = 0; i < n; i++)
    {        
        cout<<a4[i]<<"\t";
    }
	cout << endl;
    delete[] a3;
    delete[] a4;
}
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int d1, d2;
    cout << "Введите длинну массива 1:";
    cin >> d1;
    cout << "Введите длинну массива 2:";
    cin >> d2;
    int* a1 = new int[d1];
    int* a2 = new int[d2];
    cout << "Массив 1:\n";
    matrix(a1, d1);
    output(a1, d1);
    cout << "Массив 2:\n";
    matrix(a2, d2);
    output(a2, d2);
    cout << "Массив с общими эелемнтами двух массивов:\n";
    sbor(a1, d1, a2, d2);
    delete[] a1;
    delete[] a2;
}
