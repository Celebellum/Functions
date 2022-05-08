#include"stdafx.h"
#include"fillrand.h"
#include"print.h"
#include"sort.h"
#include"statistic.h"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	cout << ("Hello", "World") << endl;//Comma operator (�������� �������) - ��������� ��������� ��������� ���������, 
	//� �� �����, ��� ��������� ���� ���������. ��������� ������ ���� ������ ����.
	//�������� ������� ���������� �������� ���������� ��������� (��������������� ����� �������).

	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	////////////////////////////////////////////////////////////////

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, m) << endl;
	Sort(brr, m);
	Print(brr, m);
}


