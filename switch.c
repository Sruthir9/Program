#include <stdio.h>
int main()
{
char op;
float num1, num2, result=0.0;
printf("WELCOME TO SIMPLE CALCULATOR\n");
printf("Enter [number 1] [+ - * /] [number 2]\n");
scanf("%f %c %f", &num1, &op, &num2);
switch(op)
{
case '+':
result = num1 + num2;
break;
case '-':
result = num1 - num2;
break;
case '*':
result = num1 * num2;
break;
case '/':
result = num1 / num2;
break;
default:
printf("\nInvalid operator");
}
printf("%.2f %c %.2f = %.2f", num1, op, num2, result);
return 0;
}