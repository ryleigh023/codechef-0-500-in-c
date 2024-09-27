#include <stdio.h>

int main() {
	int t, x, h;// your code goes here
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d",&x, &h );
        if (x>=h)
        {
            printf("Yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}

