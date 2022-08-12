void main(){
    int i, j;
    char a;
    for(i=1; i<=4; i++){
        a=65;
        for(j=1; j<=7; j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf(" %c",a);
            }
            else
            {
                printf("  ");
            }
            a++;
        }
        printf("\n");
    }
    getch();
}
