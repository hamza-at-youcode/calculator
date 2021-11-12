#include<stdio.h>
#include <conio.h>
#include<stdlib.h>

int main(){
    printf("\nWelcome to youCode calc\n");
    char ch;
    float a = 0,b = 0;
    
    do{
        printf("\n\t***** Menu *****\n");
        printf("+ for addition.\n");
        printf("- for subtraction.\n");
        printf("* for multiplication.\n");
        printf("/ for division.\n");
        printf("\n >");
        ch = getch();
        printf("\n");
        switch (ch)
        {
        case '+':
            printf("Enter the first numbre: ");
            scanf("%f",&a);
            printf("Enter the second numbre: ");
            scanf("%f",&b);
            printf("Result: %0.2f + %0.2f = %0.2f",a,b,a+b);
            break;
        case '-':
            printf("Enter the first numbre: ");
            scanf("%f",&a);
            printf("Enter the second numbre: ");
            scanf("%f",&b);
            printf("Result: %0.2f - %0.2f = %0.2f",a,b,a-b);
            break;
        case '*':
            printf("Enter the first numbre: ");
            scanf("%f",&a);
            printf("Enter the second numbre: ");
            scanf("%f",&b);
            printf("Result: %0.2f * %0.2f = %0.2f",a,b,a*b);
            break;
        case '/':
            printf("Enter the first numbre: ");
            scanf("%f",&a);
            printf("Enter the second numbre: ");
            scanf("%f",&b);
            if (b == 0) printf("\nTake a coffee and try a try again!");
            else printf("Result: %0.2f / %0.2f = %0.2f",a,b,a/b);
            break;
        case '0':exit(0);
        default:
            printf("Take a coffee and try a try again!\n");
            break;
        }
    } while (ch != '0');
    
}