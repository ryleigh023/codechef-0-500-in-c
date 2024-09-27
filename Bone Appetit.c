#include <stdio.h>

int main() {
	int n, m, x, y, bones, blood, total;
	scanf("%d %d", &n, &m);
	scanf("%d %d", &x, &y);
	bones = n*x;
	blood = m*y;
	total = bones + blood;
	printf("%d", total);
	return 0;


}

