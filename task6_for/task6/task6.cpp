#define _CRT_SECURE_NO_WARNINGS
#include "1.h"
//#include <1.h>
//#include "task1.cpp"

int main(void)
{
	system("chcp 1251");
	int d;
	for (int i = 0; i != -1;)
	{
		system("cls");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("Для выхода введите 6\n");
		int n = 0, k = 0;
		double e = 0.0;
		printf("Введите номер задания : ");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых n:");
			scanf_s("%d", &n);
			printf("Сумма=%f\n\n", task1(n));
			system("pause");
			break;
		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность E=");
			scanf_s("%f", &e);
			printf("Сумма=%f\n\n", task2(e));
			system("pause");
			break;
		case 3:
			system("cls");
			printf("Задание 3 \n");
			printf("Введите число n= ");
			scanf("%d", &n);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			printf("Последовательность = ");
			task3(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("Задание 4");
			printf("Введите E=");
			scanf_s("%f", &e);
			printf("Номер = %d\n\n", task4(e));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите число E= ");
			scanf_s("%f", &e);
			printf("Номер = %d\n\n", task5(e));
			system("pause");
			break;
		case 6:
			i = -1;
			break;
		default:
			printf("Неправильный ввод");
			system("pause");
		}
	}
	system("pause");
	return(0);
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
