#include <stdio.h>

int main() {
	int t, a , b, c;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d %d", &a, &b, &c);
	    if (c == a+b)
	    {
	        printf("YES\n");
	    }
	    else 
	    {
	        printf("NO\n");
	    }
	}
    return 0;
}

