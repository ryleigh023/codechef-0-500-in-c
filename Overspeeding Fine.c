#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    if (x<=70)
	    {
	        printf("0\n");
	    }
	    else if (x<=100)
	    { 
	        printf("500\n");
	    }
	    else 
	    {
	        printf("2000\n");
	    }
	}
	return 0;

}
