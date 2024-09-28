#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    if (x<4) printf("mild\n");
	    else if (x<7) printf("medium\n");
	    else printf("hot\n");
	    
	}
	return 0 ;

}
