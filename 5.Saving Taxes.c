#include <stdio.h>

int main() {
	int x, y, tax;
	int t;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    tax = x-y;
	    printf("%d\n", tax);
	}
	return 0;
	

}

