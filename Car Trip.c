#include <stdio.h>

int main() {
	int t, x, cost;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    if (x<300)
	    {
	    printf("3000\n");
	    }
	    else
	    {
	        printf("%d\n", x*10);
	    }
	    
	}
	return 0;

}

