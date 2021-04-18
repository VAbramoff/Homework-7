#include <iostream>
using namespace std;
const int dl = 10;
void matrix(int* as, int dl)
{
	for (int i = 0; i < dl; i++)
	{
		as[i] = rand() % 20-10;
	}
}
void output(int* as,int dl)
{
	for (int i = 0; i < dl; i++)
		cout << as[i] << "\t";

}
void sort(int* as,int dl)
{
	int k = 0;
	int c = 0;
	int j = 0;
	int* a0 = new int[k];
	int* aot = new int[c];
	int* apol = new int(j);
	for (int i = 0; i < dl; i++)
	{
		if (as[i] == 0)
		{
			a0[k] = as[i];
			k++;
		}
		else if (as[i] < 0 && as[i]!=0)
		{
			aot[c] = as[i];
			c++;
		}
		else if (as[i] > 0)
		{
			apol[j] = as[i];
			j++;
		}		
	}
	cout << endl;
	cout << "Массив с нулевыми элементами:" << endl;
	output(a0,k);
	cout << endl;
	cout << "Массив с отрицательными элементами:" << endl;
	output(aot,c);
	cout << endl;
	cout << "Массив с положительными элементами:" << endl;
	output(apol,j);
	delete[] a0;
	delete[] aot;
	delete[] apol;
	
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));	
	int as[dl];
	matrix(as,dl);
	output(as,dl);
	sort(as,dl);
}
