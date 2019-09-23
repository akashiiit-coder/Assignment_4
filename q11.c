#include <stdio.h>
int main()
{
    int n1,n2,i,p1,p2,t;  
    printf("Enter a range of two digit numbers");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
       t=i;
        p1=t%10;
        t=t/10;
        p2=t%10;
        if((p1+p2)%7==0)
        printf("%d\n",i);
    }
   return 0;
}