#include <stdio.h>

int main() {
	int t, x, y;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    if (y>x) printf("NO\n");
	    else printf("YES\n");
	    
	}
	return 0;

}
