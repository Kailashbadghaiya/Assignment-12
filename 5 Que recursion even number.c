#include<stdio.h>
#include<conio.h>
void print(int n)
{
    if(n>=2)
        print(n-1);
        printf("%d ",2*n);
}
int main()
{
    int i ;

    printf("Enter a number\n");
    scanf("%d",&i);

    print(i);
    return 0;
}
