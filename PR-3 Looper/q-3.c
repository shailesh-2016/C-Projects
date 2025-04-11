#include<stdio.h>

int main(){
    int num,first,last;

    printf("Enter the number :");
    scanf("%d",&num);

    last = num % 10;
    printf("%d",first);

    while (num >= 10)
    {
      num =num/10;
    }
    first =num;

    int sum = first + last;

    printf("the sum of the first and the last digit:%d",sum);
    
}