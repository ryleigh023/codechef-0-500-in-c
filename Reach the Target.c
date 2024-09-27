#include <stdio.h>

int main() {
	int t, x, y, runs;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    runs = x-y;
	    printf("%d\n", runs);
	}
	return 0;
}

