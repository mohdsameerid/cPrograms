void main()
{
    int i, j,k,number;
    char alpha;
    for(i=1; i<=4; i++)
    {
        k=1;number=1; alpha=65;

        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(k)
                {
                    if(i%2==1)
                        printf("%d",number++);
                    if(i%2==0)
                        printf("%c",alpha++);
                }
                else
                    printf(" ");
             k = 1-k;
            }
            else
               {
                   printf(" ");
               }
        }
        printf("\n");
    }
}
