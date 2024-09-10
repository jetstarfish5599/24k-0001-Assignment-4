#include <stdio.h>
int main()
{
//assign variable
int a;
//take input from user
printf("Enter number: ");
scanf("%d",&a);
//start if statemant
if(a%2==0)
//output is even when statemant is correct
{
printf("The number is Even");
}
//else start
else
//output is odd when statement is not correct
{
printf("This number is Odd");
}
return 0;
}
//mainend