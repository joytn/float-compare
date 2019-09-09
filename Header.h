#pragma once
#include<math.h>
#include<stdlib.h>
#include <iostream>

int Float_Compare ( int K) {
	float N[5] = { {3.0},{ 4.0},{ 3.58} };
	float Max = 0;
	int x = sizeof(N);				//получаем кол-во элиметов в массиве N
	std::cout << x;
	for (int i=0;i<=x;i++)			//сравниваеи их между собой
	{
		if (N[x] >= Max) {
			Max = N[x];
			
		}
		else {
			
		};
	};
	std::cout << Max;


}

