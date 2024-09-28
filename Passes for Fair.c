#include <stdio.h>

int main()
{   
    int t, n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &k);
        if (k>n)
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No\n");
        }
    }
	return 0;

}

