#define _CRT_SECURE_NO_WARNINGS
#define N 10
#define M 1000

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

void Ff(float arr[], int *&num) {
	//int c(0);
	float summ(0), gh(0);
	float result;
	num = new int(0);

	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		*(arr + i) = rand() % 100;
		summ += *(arr + i);
		cout << *(arr + i) << " ";
		result = summ;
	}

	summ /= N;

	for (int i = 0; i < N; i++) {

		gh = abs(*(arr + i) - summ);

		if (result > gh) {
			result = gh;
			*num = i;
		}
	}
	cout << endl << "ср. знач массива: " << summ
		<< "\tразность: " << result << "\tномер эл-та: " << *num << endl;
	
}

int main() {
	setlocale(LC_ALL, "rus");
	
	/*Все изменения массивов и строк в функциях должны сохраняться. 
	Если сказано, что значение сохраняется в переменной - аргументе, 
	то это значит, что все изменения с этой переменной должны отразиться 
	на оригинальной переменной, переданной в функцию,
	а сама переменная-аргумент является указателем.
	Все результаты работы программ необходимо выводить на экран.*/

	/*Написать функцию-процедуру, которая принимает в качестве аргументов 
	вещественный массив и переменную. Находит номер элемента, который 
	ближе всех по значению к среднему арифметическому элементов 
	массива и сохраняет его в переменной-аргументе.*/
	
	float arr[N];
	int* num(0);
	char res(0);
	
	//float* yk1 = &arr[N];
	//float* yk2 = &result;
	
	Ff(arr, num);

	cout << endl << *num << endl << endl;
	system("pause");
}