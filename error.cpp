// error.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <ctime>
#include <windows.h>
#include <locale.h>
using namespace std;
	int main()
		
{
	setlocale(LC_ALL, "Russian");
	time_t start, end;
	time(&start);
	{
		clock_t start = clock();
		std::cout << "Введите точность = \n";
		int j;
		std::cin >> j;
		clock_t end = clock();
		double seconds = (double)(end - start) / CLOCKS_PER_SEC;

		printf("The time: %f seconds\n", seconds);
	}
		time(&end);
	double seconds = difftime(end, start);
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
