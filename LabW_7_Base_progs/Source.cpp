#define _CRT_SECURE_NO_WARNINGS
#define N 10
#define M 1000

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

int Ff(double arr[N], double result) {
	int c(0);
	double summ(0), gh(0);

	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 100;
		summ += arr[i];
		cout << arr[i] << " ";
	}

	summ /= N;
	result = arr[0];

	for (int i = 0; i < N; i++) {

		gh = abs(arr[i] - summ);

		if (result > gh) {
			result = gh;
			c = i;
		}
	}
	cout << endl << "��. ���� �������: " << summ
		<< "\t��������: " << result << "\t����� ��-��: " << c << endl;
	return result;
}

int main() {
	setlocale(LC_ALL, "rus");
	
	/*��� ��������� �������� � ����� � �������� ������ �����������. 
	���� �������, ��� �������� ����������� � ���������� - ���������, 
	�� ��� ������, ��� ��� ��������� � ���� ���������� ������ ���������� 
	�� ������������ ����������, ���������� � �������,
	� ���� ����������-�������� �������� ����������.
	��� ���������� ������ �������� ���������� �������� �� �����.*/

	/*�������� �������-���������, ������� ��������� � �������� ���������� 
	������������ ������ � ����������. ������� ����� ��������, ������� 
	����� ���� �� �������� � �������� ��������������� ��������� 
	������� � ��������� ��� � ����������-���������.*/
	
	double arr[N]{ 0 };
	double result(0), res(0);
	
	res = Ff(&arr[N], result);
	system("pause");
}