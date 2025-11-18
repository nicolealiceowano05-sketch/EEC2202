#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    double result;
    printf("Enter two numbers: ");
    scanf("%d",&num1);
    scanf(" %d",&num2);
    while (getchar() != '\n');
    char op;
    printf("Enter an operator('+','-','*','/','%%')\n: ");
    scanf("%c",&op);

    switch(op)
    {
        case '+':
        {
        result = num1+num2;
        printf("result = %.4lf\n",result);
        break;
        }

        case '-':
        {
        result = num1-num2;
        printf("result = %.4lf\n",result);
        break;
        }

        case '*':
        {
        result = num1*num2;
        printf("result = %.4lf\n",result);
        break;
        }

        case '/':
        {
        result = num1/num2;
        printf("result = %.4lf\n",result);
        break;
        }

        case '%':
        {
        result = num1%num2;
        printf("result = %.4lf\n",result);
        break;
        }

        default:
        {
        printf("Invalid operator\n");
        }
    
    }

    return 0;

}