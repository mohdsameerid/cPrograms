main()
{
    int i, j, k, n=11, m=0;
    for(i=1; i<=21; i++)
    {
        for(j=1; j<=21; j++)
        {
            if(j>=n+1-m && j<=n-1+m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
}
