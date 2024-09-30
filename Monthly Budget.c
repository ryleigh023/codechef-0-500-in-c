#include <stdio.h>

int main() {
	int t, x, y;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    if (x>=30*y)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("no\n");
	    }
	    
	    
	}
	return 0;

}

