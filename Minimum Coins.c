#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    if (x%10==0)
	    {
	        printf("0\n");
	    }
	    else if (x>10)
	    {
	        printf("%d\n", x%10);
	    }
	    else 
	    {
	        printf("%d\n", x);
	    }
	}
	return 0;

}

