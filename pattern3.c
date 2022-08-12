void main()
{
    int i, j, k,r,c ;
    printf("Enter a row no. .. ");
    scanf("%d",&r);
    printf("Enter a column no. .. ");
    scanf("%d",&c);
    for(i=1; i<=r; i++)
    {
        k=1;
        for(j=1; j<=c; j++)
        {
            if(j<=i)
            {
               /* if(j%2==0)
                    k=0;
                else
                    k=1;*/

                printf("%d",k);
                k=1-k;

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
