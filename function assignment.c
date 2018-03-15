#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int prod(int a, int b);
double divide(int a, int b);


int main()
{
    int num1, num2;

    char ch, c, test;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

        printf("\nWhat you want to do enter 'a' for Addition 's' for Subtraction \n 'm' for Multiply, 'd' for Division :\n");
        scanf("%c%c", &c, &ch);

        switch(ch) {

            case 'a':
                printf("Num1 + Num2 = %d\n", add(num1,num2));
                break;
            case 's':
                printf("Num1 - Num2 = %d\n", sub(num1,num2));
                break;
            case 'm':
                printf("Num1 * Num2 = %d\n", mul(num1,num2));
                break;
            case 'd':
                printf("Num1 / Num2 = %lf\n", divide(num1,num2));
                break;
            default:
               printf("You enter a wrong character\n");
               break;
        }

    return 0;
}


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}


double divide(int a, int b)
{
    return (double)a / (double)b;
}
