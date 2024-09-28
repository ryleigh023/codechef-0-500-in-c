#include <stdio.h>

int main() {
	int t, g, b;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &g, &b);
	    if (b>=g)
	    {
	        printf("%d\n", b-g);
	    }
	    else
	    {
	        printf("%d\n", g-b);
	    }
	}
   return 0;
}

