#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include"set.h"

int* set::setMoney(int num) {
	//num 받아온 갯수만큼 array 할당
	int* array = new int[num];
	for (int cnt = 0; cnt < num; cnt++) {
		scanf("%d", array[cnt]);
		getchar();
	}

	return array;
}