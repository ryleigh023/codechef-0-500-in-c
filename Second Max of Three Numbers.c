#include <stdio.h>

int main() {
	int t, a,b,c, l;
	scanf("%d", &t);
	while (t--)
	{
	scanf("%d %d %d", &a, &b, &c);
	if ((b>a && b<c) || (b>c && b<a))
    {
        printf("%d\n", b);
    }
    else if ((a>b && a<c) || (a>c && a<b))
    {
        printf("%d\n", a);
    }
    else 
    {
        printf("%d", c);
    }
	}
	return 0;
}

