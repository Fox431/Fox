// error2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <chrono>
using namespace std;
//Оригинальная функция
//Принимает значение X
//Возвращает результат интеграла
double origfunc(double);
//Метод Симпсона
//Принимает пределы интегрирования и точность вычисления
//Возвращает результат интеграла
double simpsonfunc(double, double, double)

//Метод трапеции
//Принимает пределы интегрирования и точность вычисления
//Возвращает результат интеграла
double trapezfunc(double, double, double);
void main()
{
    time_t start1, end1;
    time(&start1);
    {
        clock_t start2 = clock();
        

		
			setlocale(LC_ALL, "Russian");
		{}
		int a = 0, b = M_PI_2; //Пределы интегрирования
		double toch; //Точность вычислений
		cout << "Введите точность: "; cin >> toch;
		if (toch <= 0 || toch > 1)
			cout << "Точность вычислений должна быть в пределах от 0(включительно) до 1";
		else
		{
			double trapeze = trapezfunc(a, b, toch);
			cout << "Результат вычисление методом трапеций: " << trapeze << endl;

			double simpson = simpsonfunc(a, b, toch);
			cout << "Результат вычисление методом Симпсона: " << simpson << endl;
		}
		_getch();

		double trapezfunc(double a, double b, double toch);
		{
			double step; //Шаг вычислений
			double integral = 0; //Интеграл
			double accuracy, IntegralValue = 0; //accuracy - точность, IntegralValue - значение интеграла в данный момент
			double kolvo = 4; //Количество
			double x = 0, first, last;
			do
			{
				step = (b - a) / kolvo;
				double sum = 0; //Сумма
				first = origfunc(a); //Нижний предел 
				last = origfunc(b); //Верхний предел
				for (int i = 1; i < kolvo; i++)
				{
					x = a + i * step;
					sum += origfunc(x);
				}
				integral = step / 2 * (last + 2 * sum + first); //Интеграл
				accuracy = fabs(IntegralValue - integral); //Разность между предыдущим и текущем значением интеграла
				IntegralValue = integral;
				kolvo *= 2; //Удваиваем количество отрезков разбиения
			} while (accuracy >= toch);
			return integral;
		}
		double simpsonfunc(double a, double b, double toch) //Функция, вычисляющая интеграл методом Симпсона;;

			double step; //Шаг разбиения
			double even, odd; //even - четный, odd - нечетный
			double integral = 0;
			double accuracy, IntegralValue = 0; //accuracy - точность, IntegralValue - значение интеграла в данный момент
			double kolvo = 4; //Количество интервалов
			double x = 0, first, last;
			kolvo *= 2;
			do
			{
				step = (b - a) / kolvo;
				even = 0; //Четный член ряда
				odd = 0;//Нечетный член ряда
				first = origfunc(a);
				last = origfunc(b);
				for (int i = 1; i < kolvo; i++)
				{
					x = a + i * step;
					if (i % 2 == 0)
						even += origfunc(x);
					else
						odd += origfunc(x);
				}
				integral = step / 3 * (last + 2 * even + 4 * odd + first); //Вычисление интеграла
				accuracy = fabs(IntegralValue - integral); //Разность значений интегралов
				IntegralValue = integral;
				kolvo *= 2; //Удваивание отрезков разбиения
			} while (accuracy >= toch);
			return integral;
		}
		double origfunc(double x)
		{
			return (sin(x) * cos(x)) / (2 + pow(sin(x), 2) - pow(cos(x), 2));
		}

        clock_t end = clock();
        double seconds = (double)(end2 - start2) / CLOCKS_PER_SEC;

        printf("The time: %f seconds\n", seconds);
    }
    time(&end1);

    double seconds = difftime(end1, start1);

    printf("The time: %f seconds\n", seconds);
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
