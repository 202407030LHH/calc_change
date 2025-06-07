#include "sub.h"

int divd(int x, int y) {
	int count = 0;
	while (x >= y) {
		x = sub(x, y);
		count++;
	}
	return count;
}