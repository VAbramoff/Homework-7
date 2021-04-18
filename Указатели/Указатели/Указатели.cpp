#include <iostream>
using namespace std;
void Matrix(int* a1, int d)
{
	for (int i = 0; i < d; i++)
	{
		a1[i] = rand() % 100;
	}
}
void Output(int* a1,int d)
{
	for (int i = 0; i < d; i++)
	{
		cout << a1[i] << "\t";
	}
}
void Poisk(int* a, int* a1, int d1, int d2)
{
	int k = 0;
	int j = 0;
	int* a2 = new int[k];
	for (int i = 0; i < d1; i++)
	{
		for (j=0; j < d2; j++)
		{
			if (a[i] == a1[j])
				break;
		}
		if (j == d2)
		{
			a2[k++] = a[i];
			
		}
	}
	cout <<"k:"<<k<< endl;
	for (int i = 0; i < k; i++)
	{
		cout << a2[i] << "\t";
	}
	delete[] a2;
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int d1;
	int d2;
	cout << "Введите длинну массива 1:";
	cin >> d1;
	cout << "Введите длинну массива 2:";
	cin >> d2;	
	int* a = new int[d1];
	int* a1 = new int[d2];
	cout << "Массив 1:\n";
	Matrix(a,d1);
	Output(a, d1);
	cout << endl;
	cout << "Массив 2:\n";
	Matrix(a1, d2);
	Output(a1, d2);
	cout << endl;
	cout << "Массив с элементами массива А, отсутствующими в массиве В:\n";
	Poisk(a, a1, d1, d2);
	delete[] a;
	delete[] a1;
}
