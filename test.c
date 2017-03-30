#include<stdio.h>
#include<string.h>
void main()
{
    char ch="k";
    char s[]="abcdef";
    int n1,n2,n3;
    n1=sizeof(ch);
    n2=sizeof(s);
    n3=strlen(s);
    printf("n1=%d,n2=%d,n3=%d\n",n1,n2,n3);
    printf("%c\n",ch+3);
    printf("%s\n",s+3);
}
