#include<stdio.h>
void main()
{
    static int a;
    int b=10;
    printf("%d,%d\n",a,b);
    {
        int a=8;
        printf("%d,%d\n",a,b);
    }
    a+=b;
    printf("%d,%d\n",a,b);
}
