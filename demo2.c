#include<math.h>



void main()
{
    int n = 5,apoint,bpoint, sum;

    printf("Enter A Range Of number you want to Sum up : ");

    scanf("%d %d",apoint,bpoint);
    sum = (bpoint*(bpoint+apoint))/2;

    printf("Sum of Number is: %d ",sum);

    printf("\n");
}
