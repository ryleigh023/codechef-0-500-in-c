#include <stdio.h>

int main() {
	int t, x, y;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    // with disposable -> 100x rupees 
	   // with cloth -> 10y rupees
	   if (100*x>=10*y) printf("CLOTH\n");
	   else printf("DISPOSABLE\n");
	   
	}
	return 0;

}

