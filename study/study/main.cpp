#include <stdio.h>
#include "exchange.h"
#include "item.h"

void main()
{
	int itemNum;
	int M;
	item itemObj;
	exchange exchangePrice;
	printf("물건을 판매할 예정입니다. 시발 반환해와라");
	printf("피자 = 1, 치킨 = 2, 햄버거 = 3 중에만 골라라 시발");

	scanf("%d", &itemNum);
	int money = itemObj.itemMoney(itemNum);

	printf("돈내놔. 10,000원 언더만 ㄱㄴ");
	scanf("%d", &M);

	// printf("물건의 가격 %d원, 너가 낸 돈 %d원, 거스름돈 %d원", money, M, exchangePrice.exchangeMoney(money, M));
}