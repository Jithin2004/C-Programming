#include<stdio.h>
main()
{
    int n,d,s,r;
    printf("Enter a number ");
    scanf("%d",&n);
    s=r=0;
    while(n!=0)
    {
        d=n%10;
        s+=d;
        r=r*10+d;
        n/=10;
    }
    printf("\nSum = %d",s);
    printf("\nReverse = %d",r);
    return 0;
}
a