int main() {
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        if (x<y)
        {
            printf("PROFIT\n");
        }
        else if (x>y)
        {
            printf("LOSS\n");
        }
        else 
        {
            printf("NEUTRAL\n");
        }
    }
    return 0;
    
	

}
