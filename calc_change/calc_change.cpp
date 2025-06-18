#include <iostream>
#include "option.h"
using namespace std;

int main() {
	int x = 0;
	int y = 0;

	cout << "첫번째 수를 입력하세요 : ";
	cin >> x;
	cout << "두번째 수를 입력하세요 : ";
	cin >> y;

	printf("입력된 수 x : [ %d ] y : [ %d ]\n", x, y);
	printf("add [ %d ] sub [ %d ] mul [ %d ] div [ %d ] mod [ %d ]\n", add(x, y), sub(x, y), mul(x, y), divd(x, y), mod(x, y));
	printf("a++ [ %d ] b++ [ %d ] a-- [ %d ] b-- [ %d ] \n", numPlus(x), numMius(x), numPlus(y), numMius(y) );
	return 0;
}