#include <stdio.h>
int main ()
{
    int ns,priceB,priceN;
    int x,y;
    printf("Number of share purchased \n");
    scanf("%d", &ns);
    printf("enter the stock price \n");
    scanf("%d",&priceB);
    printf("enter the current  stock price \n");
    scanf("%d",&priceN);
    x=ns*priceB;
    y=ns*priceN;
    int diff=y-x;
    printf("Stock price before %d\n stock price after %d\n difference is %d\n",x,y,diff ); 
    return 0;
}