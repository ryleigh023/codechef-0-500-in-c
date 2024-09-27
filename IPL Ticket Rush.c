#include <stdio.h>

int main() {
	int t, n, m, cant;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &n, &m);
	    cant = n - m;
	    if (cant<0)
	    {
	        cant = 0;
	    }
	    printf("%d\n", cant);
	    
	}
   return 0;
}

