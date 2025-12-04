#include<stdio.h>
void main()
int main()
{
    char name[10];
    int i,len;
    
    printf("enter your name:");
    scanf("%s", name);
    len = starlen(name);
    printf("reverse name:");
        for(i=len-1,i=>=0,i--)
        {
            printf("%c",name[i]);
        }
}