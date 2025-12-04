#include <stdio.h>
void add(); // Declare add function
int main()
{
    add(); // Call add function
}
void add()
{
    int x,y;
    printf("\nEnter any 2 numbers:");
    scanf("%d%d",&x,&y);
    printf("\nSum=%d",x+y);
}