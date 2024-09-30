#include <stdio.h>

int main() {
	int t, a,b, c, d;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d %d %d", &a, &b, &c, &d);
	    if (a-c<b-d) printf("first\n");
	    else if (a-c>b-d) printf("second\n");
	    else printf("any\n");
	}
	return 0;

}

