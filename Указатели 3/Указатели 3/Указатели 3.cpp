#include <iostream>
using namespace std;
void matrix(int* a, int d)
{
	for (int i = 0; i < d; i++)
	{
		a[i] = rand() % 10;
	}
}
void output(int* a, int d)
{
	for (int i = 0; i < d; i++)
	{
		cout<<a[i]<<"\t";
	}
}
void sobr(int* a1, int* a2, int d1, int d2)
{
	int k = 0;
	int* a3 = new int[d1 + d2];
	for(int i=0;i<d1;i++)
	{
		a3[i] = a1[i];
	}
	for (int i = d1; i < d1 + d2; i++)
	{
		a3[i] = a2[k];
		k++;
	}
	for (int i = 0; i < d1 + d2; i++)
		cout << a3[i] << "\t";
	delete[] a3;
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int d1, d2;
	cout << "Введите длину массива 1:";
	cin >> d1;
	cout << "Введите длину массива 2:";
	cin >> d2;
	int* a1 = new int[d1];
	int* a2 = new int[d2];
	matrix(a1, d1);
	output(a1, d1);
	cout << endl;
	matrix(a2, d2);
	output(a2, d2);
	cout << endl;
	sobr(a1, a2, d1, d2);
	delete[] a1;
	delete[] a2;
}