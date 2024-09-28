#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d", &x);
	    if (x==1 || x==2 ||x==3||x==4)
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

