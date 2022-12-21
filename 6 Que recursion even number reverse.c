#include<stdio.h>
#include<conio.h>
void print(int n)
{
    if(n>=1)
        printf("%d ",2*n);
        print(n-1);
}
int main()
{
    int i ;
    printf("Enter a number\n");
    scanf("%d",&i);

    print(i);
    return 0;
}
