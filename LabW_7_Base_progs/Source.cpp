#define _CRT_SECURE_NO_WARNINGS
#define N 10
#define M 1000

#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;

void Ff(double *arr[N], double *res) {
	int c = 0;
	double k = 0, gh;
	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		k += *arr[i];
		c += 1;
	}

	*res = *arr[0];
	cout << k << " " << c;
	k /= c;
	for (int i = 0; i < N; i++) {
		gh = *arr[N] - k;
		gh += *arr[N] + k;
		gh /= 2;
		if (*res > gh) {
			*res = gh;
		}
	}
	cout<< *res;
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
	
	
	//cout << Ff(arr[N], 0);

	int c(0);
	double summ(0), gh(0);
	double arr[N]{0}, result(0);

	srand(time(NULL));
	
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 100;
		summ += arr[i];
		cout << arr[i]<<" ";
	}
		
	//cout << summ << " " << N<<endl;
	summ /= N;
	result = arr[0];

	for (int i = 0; i < N; i++) {
		//if (arr[i] >= summ) gh = arr[i] - summ;
		//if (arr[i] < summ) gh = summ + arr[i];

		gh = abs(arr[i] - summ);

		if (result > gh) {
			result = gh;
			c = i;
		}
	}
	cout<< endl <<"��. ���� �������: " <<summ
		<< "\t��������: " << result << "\t����� ��-��: " << c << endl;
}

