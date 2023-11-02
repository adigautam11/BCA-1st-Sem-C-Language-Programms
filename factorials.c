#include<stdio.h>
int main()
{
    int num1,i,fact;
    printf("Enter a number: ");
    scanf("%d",&num1);
    fact=i=1;
    while(i<=num1)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial value of %d = %d\n",num1,fact);
    return 0;
}