#include<stdio.h>
#include<iostream>
#include<locale.h>

void task7()
{
	printf("�� ����� ������, ���� :(");
}
void task6()
{
	int x;
	printf("x = ");
	scanf_s("%d", &x);

	for (double i = 0; i <= 7; i++)
	{
		double z = pow(x, i);
		printf("%d\n", (int)z);
	}
}
void task5()
{
	printf("�� ���� ������ ���� ������ � ����");
}
void task4()
{
	int x, y, z;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	
	printf("��� �� ������ ������� � ����� �������?\n1.�������(+)\n2.������ ��������(-)\n3.��������(*)\n4.���������(/)\n");
	scanf_s("%d", &z);
	switch (z)
	{
	case 1:
	{
		z = x + y;
		printf("%d\n", z);
	} break;
	case 2:
	{
		z = x - y;
		printf("%d\n", z);
	}break;
	case 3:
	{
		z = x * y;
		printf("%d\n", z);
	} break;
	case 4:
	{
		z = x / y;
		printf("%d\n", z);
	} break;
	default:
		break;
	}
}
void task3()
{

}
void task2()
{
	float a, b, c, d, e, f;
	printf("������� ���� ������ ��������:");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	scanf_s("%f", &d);
	scanf_s("%f", &e);

	f = (a + b + c + d + e) / 5;
	printf("������� ������ = ");
	printf("%f\n", f);
	
	if (f >= 4)
		printf("� �������� �����������.\n");
	else
		printf("� �������� �� �����������.\n");
}
void task1()
{
	int x, y;
	printf("x = ");
	scanf_s("%d", &x);
	printf("y = ");
	scanf_s("%d", &y);
	
	if (x == y)
	{
		printf("��� �����\n");
	}
	else if(x>y)
	{
		printf("%d ", y);
		printf("������  ");
		printf("%d\n", x);
	}
	else
	{
		printf("%d ", x);
		printf("������ ");
		printf("%d\n", y);
	}
}
void main() 
{
	setlocale(LC_ALL, "");

	int task, flag;

	start:

	printf("������� ����� ������:");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:task1(); break;
	case 2:
	case 3:
		task2(); break;
	case 4:task4(); break;
	case 5:task5(); break;
	case 6:task6(); break;
	case 7:task7(); break;
	default:
		break;
	}
	printf("������ ����������?1/0");
	scanf_s("%d", &flag);

	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}