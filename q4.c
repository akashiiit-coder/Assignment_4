#include <stdio.h>
int main()
{
    for(int i=20;i<=80;i++)
    {
        if(i>=20 && i<=40 && i%2==0)
        printf("%d\n",i);
        if(i>=50 && i<=80 && i%2!=0)
        printf("%d\n",i);
    }
}