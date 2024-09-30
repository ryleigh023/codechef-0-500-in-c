#include <stdio.h>

int main() {
	int t, x, y, z;
	scanf("%d", &t);
	while (t--)
	{ 
	    scanf("%d %d %d", &x, &y, &z);
	    ((x>y)? (x>z) ? printf("setter\n") :printf("editorialist\n") : (y>z) ? printf("tester\n"): printf("editorialist\n"));
	}
	return 0;

}

