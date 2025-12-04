#include<stdio.h>
void main()
{
    char n[20];
    int v=0,i;
    printf("Enter your name: ");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U')
        {
            v++;
        }
    }
    printf("Number of vowels in your name: %d",v);

}