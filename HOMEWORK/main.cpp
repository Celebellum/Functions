#include<iostream>
using namespace std;
//#define Dodelat
//#define Dodelat2
//#define Dodelat3


void Fill_Rand(int a, int b);					    //Заполняет массив рандомными числами
void Print(int a, int b);						    //Выводит массив на экран
void Sortmin(const int SIZE, int arr[]);		    //Cортирует массив
void Sortmax(const int SIZE, int arr[]);		    //Cортирует массив
int Sum(const int SIZE, int arr[]);				    //Возвращает сумму элементов массива
double Avg(int average, int arr[]);			    //Возвращает среднее арифметическое массива
int minValueIn(const int SIZE, int arr[]);		    //Возвращает минимальное значение массива
int maxValueIn(const int SIZE, int arr[]);		    //Возвращает максимальное значение массива
void shiftLeft(const int SIZE, int arr[], int number);		    //Циклический сдвиг массива влево на заданное число
void shiftRight(const int SIZE, int arr[], int number);		    //Циклический сдвиг массива вправо на заданное число
int UniqueRand(const int SIZE, int arr[]);		    //Звполнят массив уникальными рандомными числами


int SIZE = 0;

void main()
{

	setlocale(LC_ALL, "Russian");
	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int number = 0;

}

void Fill_Rand(int SIZE, int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
	}
}
void Print(int SIZE, int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";
}
void Sortmin(const int SIZE, int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}

		}
	}
}
void Sortmax(const int SIZE, int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] < arr[j])
			{
				int buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
int Sum(const int SIZE, int arr[])
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int SIZE, int arr[])
{
	double average = 0;
	average = (Sum(SIZE, arr) / SIZE);
	return average;
}

#ifdef Dodelat
int maxValueIn(const int SIZE, int arr[])
{
	//наналог от большего к меньшему
}
#endif // Dodelat

#ifdef Dodelat2
int shiftLeft(const int SIZE, int arr[], int number)
{
	while (number > 0);
	{
		int buffer_shiftleft = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer_shiftleft;
		number--;
	}
}
#endif // Dodelat2

void shiftRight(const int SIZE, int arr[], int number)
{
	while (number > 0);
	{
		int buffer_shiftright = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer_shiftright;
		number--;
	}

}
#ifdef Dodelat3
int UniqueRand(const int SIZE, int arr[])
{

}
#endif // Dodelat3

