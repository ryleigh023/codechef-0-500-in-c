#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    if (x<=3)
	    printf("bronze\n");
	    else if (x>3 && x<=6)
	    printf("silver\n");
	    else 
	    printf("gold\n");
	}
	return 0;

}

