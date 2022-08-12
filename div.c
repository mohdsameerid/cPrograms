void main()
{
    int temp, count=0, k=3;
    int num = 123456789;
    printf("Num is : %d\n",num);
     int p1 = num / 1000;
     int p2 = num % 1000;
    printf("p=%d  p2=%d",p1, p2);

  /*  temp = num;
    while(temp != 0){
        temp = temp / 10;
        count++;
    }*/
    //int merger = 10 * (count-k-1);
 //   printf("%d",10 * (count-k-1););

     int ans = (p2*100000)+p1;
     printf("%d",ans);

}
