#include<stdio.h>
#include<conio.h>
void print(int n)
{
   if(n==0)
    return ;
    print(n-1);
    printf("%d ",n);

}
int main()
{
    int i ;

    printf("Enter a number\n");
    scanf("%d",&i);

    print(i);
    return 0;
}
