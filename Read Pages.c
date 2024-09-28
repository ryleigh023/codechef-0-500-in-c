#include <stdio.h>

int main() {
	int t, n, x, y;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d %d", &n, &x, &y );
	    if (x*y>=n)
	    {
	        printf("Yes\n");
	    }
	    else 
	    {
	        printf("No\n");
	    }
	}
	return 0;

}

