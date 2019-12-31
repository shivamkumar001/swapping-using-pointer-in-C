#include <stdio.h>
void swap(int *x , int *y)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
}
int main()
{
    //const float pi=3.14;
    printf("enter two values : ");
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a= % d , b = %d ",a,b);
    //printf("b=%d",b);

    return 0;
}
