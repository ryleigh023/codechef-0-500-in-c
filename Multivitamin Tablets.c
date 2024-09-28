#include <stdio.h>

int main() {
        int t, x, y;
        scanf("%d", &t);
        while (t--)
        {
            scanf("%d %d", &x, &y);
            int a = y/3;
            if (a>=x) { printf("yes\n");}
            else {printf("no\n");}}
            return 0;
}

