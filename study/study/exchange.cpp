#include "exchange.h"

int exchange::exchangeMoney(int itemMoney, int M)
{
	int price = itemMoney * M;
	return price;
}