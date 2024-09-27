#include <stdio.h>

int main() {
int t,n,x, rem;
scanf("%d", &t);
while (t--)
{
    scanf("%d %d", &n, &x);
    rem = n - x;
    printf("%d\n", rem);
    
}
return 0;
}

