#include <stdio.h>

int main()
{

    char n;
    printf("Enter the operator ");
    scanf("%c", &n);

    int x, y;
    printf("Enter two operands :");
    scanf("%d%d", &x, &y);

    switch (n)
    {
    case '+':
        printf("Their sum is :%d", x + y);
        break;
    case '-':
        printf("Their sub is :%d", x - y);
        break;
    case '*':
        printf("Their multy is :%d", x * y);
        break;
    case '/':
        printf("Their division is :%d", x / y);
        break;
    default:
        break;
    }

    return 0;
}