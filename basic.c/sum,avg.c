#include<stdio.h>
int main()
{
    int a,b,avg,sum;
    printf("Enter two number a:\n b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    avg=(a+b)/2;
    printf("sum is %d\navg is %d\n",sum,avg);//%d ka mtlb h ki sum ko call kar ra
    return 0;
}