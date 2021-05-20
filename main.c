#include <stdio.h>
#include <stdlib.h>

int main()
{
    float result, num1, num2;
    char op, wd;
    do
    {
        printf("First number?");

        scanf("%f", &num1);

        printf("Second number?");

        scanf("%f", &num2);

        printf("Operator?");

        scanf("\n%c", &op);

        switch (op)
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
            printf("Fehler\n");
        }

        printf("Result=%8.3f\n", result);

        do
        {
            printf("Wiederholen(J/N)");
            scanf("\n%c", &wd);
        } while ((wd != 'j') && (wd != 'J') && (wd != 'n') && (wd != 'N'));
    } while ((wd == 'j') || (wd == 'J'));
    return 0;
}