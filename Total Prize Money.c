#include <stdio.h>

int main() {
    int t, x, y, total;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        total = x*10 + y*90;
        printf("%d\n", total);
    }
    return 0;

}
