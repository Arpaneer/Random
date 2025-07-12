#include <stdio.h>

int main()
{
    float a, b, c;
    char ch;

    printf("Enter the first value : ");
    scanf("%f", &a);
    printf("Enter user choice to perform operation (+,-,*,/): ");
    scanf(" %c", &ch);
    printf("Enter the second value : ");
    scanf("%f", &b);
    switch (ch)
    {
    case '+':
        c = a + b;
        printf("Output=%.2f\n", c);
        break;

    case '-':
        c = a - b;
        printf("Output=%.2f\n", c);
        break;

    case '*':
        c = a * b;
        printf("Output=%.2f\n", c);
        break;

    case '/':
        if (b != 0)
        {
            c = a / b;
            printf("Output=%.2f\n", c);
        }
        else
        {
            printf("Divison by 0 is invalid.\n");
        }
        break;

    default:
        printf("Invalid operation.\n");
        break;
    }
    return 0;
}
