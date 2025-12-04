#include <stdio.h>
void main()
{
    int a, b,tem;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    tem=a;
    a=b;
    b=tem;
    printf("after swapping value a:%d\n",a);
    printf("after swapping value b:%d\n",b);
}
