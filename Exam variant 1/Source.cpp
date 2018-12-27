#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#include <chrono>
#include <thread>

void task10()
{
	printf("Играем в КУБИКИ\n");
	int comp;
	int pol;
	using namespace std::chrono_literals;
	int A, B, C, D, E, F;
	for (size_t i = 1; i <= 3; i++)
	{
		pol = 0;
		comp = 0;
		printf("Начнем! раунд %d\n", i);
		printf("Кинуть кубики?1/0");
		scanf_s("%d", &A);
		if (A == 0)
		{
			printf("Ладно подождем\n");
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
	printf("1 кубик: ");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\t", A);
	printf("2 кубик: ");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\n", B);
	E = A + B;

	printf("Моя очередь\n");
	C = 1 + rand() % 5;
	D = 1 + rand() % 5;
	printf("1 кубик: ");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\t", C);
	printf("2 кубик: ", D);
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(".");
	std::this_thread::sleep_for(0.5s);
	printf(". ");
	printf("%d\n", D);
	F = C + D;
	if (E == F)
		printf("Ничья! В раунде %d\n", i);
	else if (E > F)
	{
		printf("Молодец!Ты победил в %d раунде\n", i);
		pol++;
	}
	else
		printf("Жалко, но я победил в %d раунде\n",i);
	comp++;
	}
	if (comp > pol)
	{
		printf("Я победил!!Машины умнее людей!!!\n");
	}
	else if (comp == pol)
		printf("Ничья!\n");
	else
		printf("Ты победил! Поздравляю! Но машины все равно умнее!\n");
}

void task9()
{
	printf("Конвертер валют\n");
	int A;
	float B;
	printf("Конвертировать тенге в? 1)Рубли  2)Доллары  3)Евро");
	scanf_s("%d", &A);

	switch (A)
	{
	case 1: {
		printf("Введите сумму которую хотите конвертировать в рубли?\n");
		scanf_s("%f", &B);
		printf("%d тенге вы конвертировали в %f рублей\n", (int)B, B / 5.52); break;
	}
	case 2: {
		printf("Введите сумму которую хотите конвертировать в доллары?\n");
		scanf_s("%f", &B);
		printf("%d тенге вы конвертировали в %f доллар\n", (int)B, B / 379); break;
	}
	case 3: {
		printf("Введите сумму которую хотите конвертировать в Евро?\n");
		scanf_s("%f", &B);
		printf("%d тенге вы конвертировали в %f евро\n", (int)B, B / 431.5); break;
	}
	}
}

void task8()
{
	printf("7 Задание это задание 2 второго варианта задачи номер 2\n");

	printf("Сумму положительных нечетных чисел меньших 50\n");
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
	printf("7 Задание это задание 2 второго варианта задачи номер 1\n");

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
			printf("Купюра 64 - %d\n", count);
		}
		else if (n >= 32)
		{
			count = 0;
			do
			{
				n = n - 32;
				count++;
			} while (n >= 32);
			printf("Купюра 32 - %d\n", count);
		}
		else if (n >= 16)
		{
			count = 0;
			do
			{
				n = n - 16;
				count++;
			} while (n >= 16);
			printf("Купюра 16 - %d\n", count);
		}
		else if (n >= 8)
		{
			count = 0;
			do
			{
				n = n - 8;
				count++;
			} while (n >= 8);
			printf("Купюра 8 - %d\n", count);
		}
		else if (n >= 4)
		{
			count = 0;
			do
			{
				n = n - 4;
				count++;
			} while (n >= 4);
			printf("Купюра 4 - %d\n", count);
		}
		else if (n >= 2)
		{
			count = 0;
			do
			{
				n = n - 2;
				count++;
			} while (n >= 2);
			printf("Купюра 2 - %d\n", count);
		}
		else if (n >= 1)
		{
			count = 0;
			do
			{
				n = n - 1;
				count++;
			} while (n >= 1);
			printf("Купюра 1 - %d\n", count);
		}
	} while (n!=0);
}

void task6()
{
	int A = 1 + rand() % 499;
	printf("Я загадал число от 1 до 500, угадай это число");
	int B;
	int count = 0;
	do
	{
		printf("Число?Если ты устал введи 0. ");
		scanf_s("%d", &B);
		count++;
		if (B == 0)
		{
			B = A;
		}
	} while (B!=A);
	printf("Попыток = %d\n", count);
}

void task5()
{
	int	A;
	int sum = 0;
	do
	{
		printf("Введите число = ");
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
	printf("Сумма всех чисел = %d\n", sum);
}

void task3()
{
	printf("Не сделал\n");

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
	printf("Вывести все четные? 1\nВывести все нечетные? 2\nВывести все числа кратные семи? 3\n");
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