#include <stdio.h>

int main() {
	int t, n, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &n, &x);
	    if (2*x >=n)
	    printf("yes\n");
	    else printf("no\n");
	    
	}
	return 0;

}

