#include <stdio.h>

int main() {
	int t, x1, y1, x2, y2, a, b;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	    a = x1+y1;
	    b = x2+y2;
	    if (a<b)
	    {
	        printf("%d\n", a);
	    }
	    else 
	    {
	        printf("%d\n", b);
	    }
	}
	return 0;
}

