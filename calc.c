#include <stdio.h>

int addition(int a, int b)
{
    printf("the sum is :- %d", a + b);
}
int substraction(int a, int b)
{
    printf("the substraction is:- %d", a - b);
}
int division(int a, int b)
{
    printf("the division is :- %d", a / b);
}
int multiplication(int a, int b)
{
    printf("the multiplication is :- %d", a * b);
}
int modulo(int a, int b)
{
    printf("the modulo is :- %d", a % b);
}

void main()
{
    int num, a, b;
    for (;;)
    {
        printf("\n\nenter 1 for addition:-\n");
        printf("enter 2 for substraction:-\n");
        printf("enter 3 for division:-\n");
        printf("enter 4 for multiplication:-\n");
        printf("enter 5 for modulo:-\n");
        printf("enter 0 for closing the program\n");
        if (num == 0)
        {
            printf("exiting the program");
            break;
        }

        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter num a:- ");
            scanf("%d", &a);

            printf("Enter num b:- ");
            scanf("%d", &b);

            addition(a, b);
            break;

        case 2:
            printf("Enter num a:- ");
            scanf("%d", &a);

            printf("Enter num b:- ");
            scanf("%d", &b);

            substraction(a, b);

            break;
        case 3:
            printf("Enter num a:- ");
            scanf("%d", &a);

            printf("Enter num b:- ");
            scanf("%d", &b);
            division(a, b);
            break;
        case 4:
            printf("Enter num a:- ");
            scanf("%d", &a);

            printf("Enter num b:- ");
            scanf("%d", &b);
            multiplication(a, b);
            break;
        case 5:
            printf("enter num a:- ");
            scanf("%d", &a);

            printf("enter num b:- ");
            scanf("%d", &b);
            modulo(a, b);
            break;
        }
    }
}