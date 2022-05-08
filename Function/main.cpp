#include<iostream>
using namespace std;

int Add(int a, int b);//Сложение      //Прототип функции(Обьявление функции) ( Function declaration)
int Sub(int a, int b);//Вычитание
int Mul(int a, int b);//Умножение 
double Div(int a, int b);//Деление


void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два числа "; cin >> a >> b;
	int c = Add(a, b);// Вызов функции (Function call) Для того , что бы Функция заработала. ЕЕ нужно хотя бы раз вызвать.
	// Один раз написанная функция может быть вызвана сколько угодно раз.Благодаря этому функции позваляют в значительной степени уменьшить обьем исходного кода а так же 
	//Функции позволяю уйти от дублированию кода и прийти к повторному использаованию кода
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a,b) << endl;
	cout << a << " * " << b << " = " << Mul(a,b) << endl;
	cout << a << " / " << b << " = " << Div(a,b) << endl;
}

int Add(int a, int b)//Сложение 
{// Реальзaция функции( Определение функции - Function definition)
 	int c = a + b;
	return c;
}
int Sub(int a, int b)//Вычитание
{
	return a - b;
}
int Mul(int a, int b)//Умножение 
{
	return a * b;
}
double Div(int a, int b)//Деление
{
	return (double)a / b;
}

const int SIZE = 5;
int arr[SIZE];