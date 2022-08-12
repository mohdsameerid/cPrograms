void main()
{
      int n1,n2,i,lcm,gcd=0;
      scanf("%d%d",&n1,&n2);
      int min = n1;
      if(n1 > n2){
          min = n2;
      }

       for(i = min; i>=2; i--)
       {
         if((n1 % min == 0) && (n2 % min == 0))
         {
            break;
         }
       }
        printf("%d ",min);

        lcm = (n1 * n2) / min;

       printf("%d ",min);
       printf("%d",lcm);
}
