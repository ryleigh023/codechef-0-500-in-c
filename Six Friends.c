#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        int o = y*2;
        int p = x*3;
        if (o>p)
        {
            printf("%d\n", p);
        }
        else
        {
            printf("%d\n", o);
        }
    }
    return 0;
	  

}
