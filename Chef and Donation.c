#include <stdio.h>

int main() {
	int t, x, y, d;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    d = y-x;
	    printf("%d\n", d);
	}
	return 0;

}

