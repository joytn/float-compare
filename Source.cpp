#include<math.h>
#include<stdlib.h>
#include <iostream>
#include <clocale>
#include <String>

std::string Float_Compare2(int K, float N[]) {

	int indexArray[5];
	//���. ������: [2, 3, 4], 3
	float Max = 0;
	int countArr = 5;				//�������� ���-�� �������� � ������� N
	int count = 0;
	//std::countArr << x;
	for (int i = 0; i <= countArr; i++)			//���������� �� ����� �����
	{
		if (N[i] >= Max) {
			Max = N[i];
		}
	};
	std::string result = "[";
	for (int i = 0; i <= countArr; i++)			//���������� �� ����� �����
	{
		if (N[i] / Max * 100 >= 100 - K) {
			//std::cout <<  i ;

			result += std::to_string(i);
			result += " ";
			count++;

		};
	};
	result += "], ";
	result += std::to_string(count);
	std::cout << result << std::endl;
	return result;
}
int Float_Compare(int K, float N[]) {

	int indexArray[5];
	//���. ������: [2, 3, 4], 3
	float Max = 0;
	int countArr = 5;				//�������� ���-�� �������� � ������� N
	int count = 0;
	//std::countArr << x;
	for (int i = 0; i <= countArr; i++)			//���������� �� ����� �����
	{
		if (N[i] >= Max) {
			Max = N[i];
			std::cout << i << " [" << N[i] << "]\n";
			count++;
		}
	};
	return (count);
}



void main() {
	setlocale(LC_ALL, "Russian");
	float N[5] = { 3.5, 3.1, 3.9, 4.0, 4.1 };
	int k = 10;

	std::cout << Float_Compare2(k, N) << std::endl;


}









