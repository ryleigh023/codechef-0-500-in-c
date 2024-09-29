#include <stdio.h>

int main() {
	int t, x, y;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y );
	    if (x<y) printf("first\n");
	    else if (x==y) printf("any\n");
	    else printf("second\n");
	    }
	    return 0;

}

