#include<stdio.h>

void main()
{
  int i,j,k,a,b,c,m,n;
  i=j=k=5;
  k=i++-j--;
  printf("%d,%d,%d\n",i,j,k);
  a=b=c=3;
  a++&&!b++&&c++;
  printf("%d,%d,%d\n",a,b,c);
  a=b=c=0;
  !a||b++||++c;
  printf("%d,%d,%d\n",a,b,c);
  printf("%d,%d\n",m=9,n=5);
  m=n=5;
  m-=n+=m-=n/=1;
  printf("%d,%d\n",m,n);
}
