#include <stdio.h>

int main() 
{
	int a, b, x, y, messi, ron;
	scanf("%d %d %d %d", &a, &b, &x, &y);
	messi = a*2+b;
	ron = x*2+y;
	if (messi<ron)
	{
	    printf("ronaldo\n");
	}
    else if (ron<messi)
    {
        printf("messi\n");
    }
    else 
    {
        printf("equal\n");
    }
    return 0;
}

