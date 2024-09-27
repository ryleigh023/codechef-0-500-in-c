#include <stdio.h>

int main() {
	int t, n, m, words;
	scanf("%d", &t);
	while (t--)
	{
	    scanf("%d %d", &n, &m);
	    words = n*m;
	    printf("%d\n", words);
	}
	return 0;

}
