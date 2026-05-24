#include <stdio.h>
#include "exchange.h"
#include "item.h"
#include "set.h"

void main()
{
	// 내가 먹고 싶은 음식을 넣고 금액을 설정한다음 아래내로 물건의 가격, 내가 낸 돈, 거스름돈이 나오도록 만들어보자
	int itemNum;
	int M;
	item itemObj;
	exchange exchangePrice;
	set setting;ㅇ모만우ㅑㅁ즁뮴ㄴ아ㅓㅜ
	printf("물건을 판매할 예정입니다. 시발 반환해와라");
	//여기서 set 함수
	printf("번호 골라줘");
	scanf_s("%d", &itemNum);
	int money = itemObj.itemMoney(itemNum,);//여기 매개변수를 set 반환된 녀석을 주자 

	p
	scanf_s("%d", &M);
	while (1) {
		if (M < money) {
			printf("노무현이 액이 부족 합니다 다시 해주셈");
			scanf_s("%d", &M);
		}
		else
	
	}

	printf("물건의 가격 %d원, 너가 낸 돈 %d원, 거스름돈 %d원", money, M, exchangePrice.exchangeMoney(money, M));
// 
}