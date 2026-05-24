#include "item.h"
#include "stdio.h"

int item::itemMoney(int num,int**array)
{
	//cash는 내야할 돈
	int cash = 0;
	// 물건의 반환값을 리턴해주는 메서드 함수 제작 
	// return 0;
	switch (num) {
	case 1:
		cash = 8000;
		break;
	case 2:
		cash = 8500;
		break;
	case 3:
		cash = 9000;
		break;
	default:
		printf("메뉴 중에서 골라주세요");
	}
	//TLqkf ㅈㄴ 웃기애ㅔ

	return cash;
}
