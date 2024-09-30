#include <stdio.h>

int main() {
	int t, n, m;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &n, &m);
	    int total = 2*n + 4*m;
	    printf("%d\n", total);
	}
	return 0;

}


