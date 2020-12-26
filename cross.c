/*
4
  1  3  6 10
  2  5  9 13
  4  8 12 15
  7 11 14 16
*/
#include<stdio.h>
int main()
{
  int i,j,n,t=1,k=0,l,m,p,q=0;
 
  scanf("%d",&n);
   q=n;
  for(i=1;i<=n;i++)
  { printf("%3d",t);
    l=t;
    m=i+1;
  
   for(j=2;j<=q;j++)
   { 
    l=l+m;
    printf("%3d",l);
    m++;
   }
  p=l+n;
  q--;
  k++;
  t=t+k;
  m=n-1;
  for(j=1;j<i;j++)
  {
   printf("%3d",p);
   p=p+m;
   m--;
  }
  printf("\n");
  }
}
