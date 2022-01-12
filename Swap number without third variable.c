#include <stdio.h>
int main()
{
    int First,Second;  
    printf("Enter the value of First and Second : ");//10 and 12 
    scanf("%d %d",&First,&Second);  
    printf("before swapping numbers:\nFirst number :%d\nSecond number:%d\n",First,Second);
    First = First + Second;// First=10+12=22
    Second = First - Second;// Second=22-12=10
    First = First - Second;// First=22-10=12
    printf("After swapping:\nFirst number :%d\nSecond number:%d",First,Second);//12 and 10
}


