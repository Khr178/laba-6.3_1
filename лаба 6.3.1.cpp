// лаба 6.3.1.cpp 

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}

void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}


int Sum(int* b, const int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
		if (b[i] < 0) s += b[i];
	return s;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 24;
	int b[n];
	int Low = -15;
	int High = 75;
	Create(b, n, Low, High);
	Print(b, n);
	cout << Sum(b, n);
	return 0;
}