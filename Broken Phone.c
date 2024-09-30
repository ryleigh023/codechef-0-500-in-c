#include <stdio.h>

int main() {
	int t, x,  y;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &x, &y);
	    if (x<y) printf("repair\n");
	    else if (x>y) printf ("new phone\n");
	    else printf("any\n");
	    
	}
	return 0;

}


