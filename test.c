#include <stdio.h>

int userinput(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    printf("You entered %d\n",number);

    return number;
}

int addnumber(int number)
{
    int sum;
    sum = number + 50;

    return sum;
}



int main(void)
{
    int number;
    number = userinput();  int addnumber(int number);

    int sum;
    sum = addnumber(number);

    printf("Your sum is %d\n", sum);

}