#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#include <chrono>
#include <thread>

void task10()
{
	printf("������ � ������\n");
	int comp;
	int pol;
	using namespace std::chrono_literals;
	int A, B, C, D, E, F;
	for (size_t i = 1; i <= 3; i++)
	{
		pol = 0;
		comp = 0;
		printf("������! ����� %d\n", i);
		printf("������ ������?1/0");
		scanf_s("%d", &A);
		if (A == 0)
		{
			printf("����� ��������\n");
			std::this_thread::sleep_for(1s);
			printf(".");
			std::this_thread::sleep_for(1s);
			printf(".");
			std::this_thread::sleep_for(1s);
			printf(".\n");
		}
	 while (A != 1);
	A = 1 + rand() % 5;
	B = 1 + rand() % 5;
	printf("1 �����: ");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\t", A);
	printf("2 �����: ");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\n", B);
	E = A + B;

	printf("��� �������\n");
	C = 1 + rand() % 5;
	D = 1 + rand() % 5;
	printf("1 �����: ");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\t", C);
	printf("2 �����: ", D);
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\n", D);
	F = C + D;
	if (E == F)
		printf("�����! � ������ %d\n", i);
	else if (E > F)
	{
		printf("�������!�� ������� � %d ������\n", i);
		pol++;
	}
	else
		printf("�����, �� � ������� � %d ������\n",i);
	comp++;
	}
	if (comp > pol)
	{
		printf("� �������!!������ ����� �����!!!\n");
	}
	else if (comp == pol)
		printf("�����!\n");
	else
		printf("�� �������! ����������! �� ������ ��� ����� �����!\n");
}

void task9()
{
	printf("��������� �����\n");
	int A;
	float B;
	printf("�������������� ����� �? 1)�����  2)�������  3)����");
	scanf_s("%d", &A);

	switch (A)
	{
	case 1: {
		printf("������� ����� ������� ������ �������������� � �����?\n");
		scanf_s("%f", &B);
		printf("%d ����� �� �������������� � %f ������\n", (int)B, B / 5.52); break;
	}
	case 2: {
		printf("������� ����� ������� ������ �������������� � �������?\n");
		scanf_s("%f", &B);
		printf("%d ����� �� �������������� � %f ������\n", (int)B, B / 379); break;
	}
	case 3: {
		printf("������� ����� ������� ������ �������������� � ����?\n");
		scanf_s("%f", &B);
		printf("%d ����� �� �������������� � %f ����\n", (int)B, B / 431.5); break;
	}
	}
}

void task8()
{
	printf("7 ������� ��� ������� 2 ������� �������� ������ ����� 2\n");

	printf("����� ������������� �������� ����� ������� 50\n");
	int sum = 0;
	for (size_t i = 0; i < 50; i++)
	{
		
		if (i % 2 == 1)
		{
			printf("%d\n", i);
			sum = sum + i;
	}
	}
	printf("Summa = %d", sum);
}

void task7()
{
	printf("7 ������� ��� ������� 2 ������� �������� ������ ����� 1\n");

	int n;
	printf("n = ");
	scanf_s("%d", &n);
	int count;
	do
	{
		if (n >= 64)
		{
			count = 0;
			do
			{
				n = n - 64;
				count++;
			} while (n>=64);
			printf("������ 64 - %d\n", count);
		}
		else if (n >= 32)
		{
			count = 0;
			do
			{
				n = n - 32;
				count++;
			} while (n >= 32);
			printf("������ 32 - %d\n", count);
		}
		else if (n >= 16)
		{
			count = 0;
			do
			{
				n = n - 16;
				count++;
			} while (n >= 16);
			printf("������ 16 - %d\n", count);
		}
		else if (n >= 8)
		{
			count = 0;
			do
			{
				n = n - 8;
				count++;
			} while (n >= 8);
			printf("������ 8 - %d\n", count);
		}
		else if (n >= 4)
		{
			count = 0;
			do
			{
				n = n - 4;
				count++;
			} while (n >= 4);
			printf("������ 4 - %d\n", count);
		}
		else if (n >= 2)
		{
			count = 0;
			do
			{
				n = n - 2;
				count++;
			} while (n >= 2);
			printf("������ 2 - %d\n", count);
		}
		else if (n >= 1)
		{
			count = 0;
			do
			{
				n = n - 1;
				count++;
			} while (n >= 1);
			printf("������ 1 - %d\n", count);
		}
	} while (n!=0);
}

void task6()
{
	int A = 1 + rand() % 499;
	printf("� ������� ����� �� 1 �� 500, ������ ��� �����");
	int B;
	int count = 0;
	do
	{
		printf("�����?���� �� ����� ����� 0. ");
		scanf_s("%d", &B);
		count++;
		if (B == 0)
		{
			B = A;
		}
	} while (B!=A);
	printf("������� = %d\n", count);
}

void task5()
{
	int	A;
	int sum = 0;
	do
	{
		printf("������� ����� = ");
		scanf_s("%d", &A);

		sum = sum + A;

	} while (A!=0);
	printf("Sum = %d\n", sum);
}

void task4()
{
	int A;
	int B;
	printf("A = ");
	scanf_s("%d", &A);

	printf("B = ");
	scanf_s("%d", &B);

	int sum = 0;
	for (size_t i = A; i <= B; i++)
	{
		printf("%d\n", i);
		sum = sum + i;
	}
	printf("����� ���� ����� = %d\n", sum);
}

void task3()
{
	printf("�� ������\n");

}

void task2()
{
	int A;
	int B;
	printf("A = ");
	scanf_s("%d", &A);

	printf("B = ");
	scanf_s("%d", &B);

	for (size_t i = A; i <= B; i++)
	{
		printf("%d\n", i);
	}
	int Q;
	printf("������� ��� ������? 1\n������� ��� ��������? 2\n������� ��� ����� ������� ����? 3\n");
	scanf_s("%d", &Q);
	switch (Q)
	{
	case 1: {
		for (size_t i = A; i <= B; i++)
		{
			if (i % 2 == 0)
				printf("%d\n", i);
		}break; }
	case 2: {
		for (size_t i = A; i <= B; i++)
		{
			if (i % 2 == 1)
				printf("%d\n", i);
		}break; }
	case 3: {
		for (size_t i = A; i <= B; i++)
		{
			if (i % 7 == 0)
				printf("%d\n", i);
		}break; }
	}
	}

void task1()
{
	int A;
	printf("A = ");
	scanf_s("%d", &A);

	for (size_t i = 0; i < A; i++)
	{
		printf("%d\n", i);
	}
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	using namespace std ::chrono_literals;

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		case 8:task8(); break;
		case 9:task9(); break;
		case 10:task10(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}