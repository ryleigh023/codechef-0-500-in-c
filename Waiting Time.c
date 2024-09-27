#include <stdio.h>

int main() {
	
	int t, k,x, rem;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &k, &x);
	    rem = ((k*7) - x);
	    printf("%d\n", rem);
	}
    return 0;
}

