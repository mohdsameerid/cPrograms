void main(){
    int N, Rem;
    scanf("%d",&N);
    while(N!=0)
    {
        Rem = N % 10;
        printf("%d",Rem);
        N = N /10;
    }
}
