#include <stdio.h>
int main()
{
    int n1,n2,p,digit=0,j;
    scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++)
    {
       p=i;
       while(p!=0)
       {
           digit++;
           p=p/10;
       } 
        p=i;
        for(j=1;j<=digit;j++)
        {
            if((p/10) == 0)
            {
                if (p%3 == 1)
                printf("%d\n",i);
            }
            p=p/10;
        }
    }
    return 0;
}