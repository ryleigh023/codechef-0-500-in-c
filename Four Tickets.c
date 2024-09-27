#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    int n = x * 4;
	    if (n<=1000)
	    {
	        printf("YES\n");
	    }
	    else 
	    {
	        printf("NO\n");
	    }
	}

}

