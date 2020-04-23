#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int choice, i, a, b;
    double x, y, result;
    clrscr();
    printf("\nSelect your operation(0 to exit):\n");
    printf("1. Addition \n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    printf("5. Square root\n 6. X ^ Y\n 7. X ^ 2\n 8. X ^ 3\n");
    printf("9. 1 / X\n 10. X ^ (1 / Y)\n 11. X ^ (1 / 3)\n12. 10 ^ X\n");
    printf("13.Percentage % \n 14. log10(x)\n 15. Sin(X)\n 16. Cos(X)\n ");
    printf("17. Tan(X)\n 18. Cosec(X)\n19. Cot(X)\n 20. Sec(X)\n");
    printf("Choice : ");
    scanf("%d", &choice);
    if (choice == 0)
        exit(0);
    else
    {

        switch (choice)
        {
        case 1:
            printf("Enter X: ");
            scanf("%lf", &x);
            printf("\nEnter Y : ");
            scanf("%lf", &y);
            result = x + y;
            printf("\nResult : %lf", result);
            break;
        case 2:
            printf("Enter X: ");
            scanf("%lf", &x);
            printf("\nEnter Y: ");
            scanf("%lf", &y);
            result = x - y;
            printf("\nResult : % lf", result);
            break;
        case 3:
            printf("Enter X: ");
            scanf("%lf", &x);
            printf("\nEnter Y: ");
            scanf("%lf", &y);
            result = x * y;
            printf("\nResult: %lf", result);
            break;
        case 4:
            printf("Enter X: ");
            scanf("%lf", &x);
            printf("\nEnter Y : ");
            scanf("%lf", &y);
            result = x / y;
            printf("\nResult : %lf", result);
            break;
        case 5:
            printf("Enter X: ");
            scanf("%lf", &x);
            result = sqrt(x);
            printf("\nResult : %lf", result);
            break;
        case 6:
            printf("Enter X : ");
            scanf("%lf", &x);
            printf("\nEnter Y : ");
            scanf("%lf", &y);
            result = pow(x, y);
            printf("\nResult   : %lf", result);
            break;
        case 7:
            printf("Enter X  : ");
            scanf("%lf", &x);
            result = pow(x, 2);
            printf("\nResult:%lf", result);
            break;
        case 8:
            printf("Enter X: ");
            scanf("% lf", &x);
            result = pow(x, 3);
            printf("\nResult: % lf", result);
            break;
        case 9:
            printf("Enter X: ");
            scanf("% lf", &x);
            result = pow(x, -1);
            printf("\nResult: %lf", result);
            break;
        case 10:
            printf("Enter X : ");
            scanf("%lf", &x);
            printf("\nEnter Y: ");
            scanf("%lf", &y);
            result = pow(x, (1 / y));
            printf("\nResult: %lf", result);
            break;
        case 11:
            printf("Enter X  : ");
            scanf("%lf", &x);
            y = 3;
            result = pow(x, (1 / y));
            printf("\nResult: %lf", result);
            break;
        case 12:
            printf("Enter X : ");
            scanf("%lf", &x);
            result = pow(10, x);
            printf("\nResult   : %lf", result);
            break;
        case 13:
            printf("Enter X: ");
            scanf("%lf", &x);
            printf("\nEnter Y  : ");
            scanf("%lf", &y);
            result = (x * y) / 100;
            printf("\nResult: % .2f", result);
            break;
        case 14:
            printf("Enter X : ");
            scanf("%lf", &x);
            result = log10(x);
            printf("\nResult: % .2f", result);
            break;
        case 15:
            printf("Enter X : ");
            scanf("% f", &x);
            result = sin(x * 3.14159 / 180);
            printf("\nResult: % .2f", result);
            break;
        case 16:
            printf("Enter X : ");
            scanf("%lf", &x);
            result = cos(x * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
        case 17:
            printf("Enter X: ");
            scanf("%lf", &x);
            result = tan(x * 3.14159 / 180);
            printf("\nResult: % .2f", result);
            break;
        case 18:
            printf("Enter X: ");
            scanf("%lf", &x);
            result = 1 / (sin(x * 3.14159 / 180));
            printf("\nResult: % .2f", result);
            break;
        case 19:
            printf("Enter X: ");
            scanf("% lf", &x);
            result = 1 / tan(x * (3.14159 / 180);
            printf("\nResult: % .2f", result);
            break;
        case 20:
            printf("Enter X: ");
            scanf("%lf", &x);
            result = 1 / cos(x * 3.14159 / 180);
            printf("\nResult: %.2f", result);
            break;
        default:
            printf("\nInvalid Choice !");
        }
    }
    return 0;
}