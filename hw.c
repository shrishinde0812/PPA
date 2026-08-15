#include <stdio.h>
int main()
{
    int no1=0 , no2=0 , ans=0;

    printf("enter first no: \n");
    scanf("%d",& no1);

    printf("enter second no:\n");
    scanf("%",& no2);

    ans= no1+no2;                    //buisness logic
    printf("addition is %d \n",ans);
    return 0;
}