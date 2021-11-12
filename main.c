#include<stdio.h>
#include <conio.h>
#include<stdlib.h>

float add(){
    float a,s = 0;
    printf("Enter 0 to end!\n");
    do
    {
        printf("> ");
        scanf("%f",&a);
        s+=a;
    } while (a!=0);
    return s;
}

float sub(){
    float a,s = 0;
    printf("Enter 0 to end!\n");
    do
    {
        printf("> ");
        scanf("%f",&a);
        s-=a;
    } while (a!=0);
    return s;
}

float _div(){
    float a,b;
    printf("Enter the first numbre: ");
    scanf("%f",&a);
    printf("Enter the second numbre: ");
    scanf("%f",&b);
    if (b == 0) printf("\nTake a coffee and try a try again!");
    else printf("Result: %0.2f / %0.2f = %0.2f",a,b,a/b);
}

void toBin(int nbr){
    int t[20],tmp = nbr;
    int i = 0,j;
    do
    {
        t[i] = nbr%2;
        nbr = nbr/2;
        i++;
    } while (nbr != 0);
    printf("\n(%d)dec = (",tmp);
    for (j = i-1; j >= 0; j--) printf("%d",t[j]);
    printf(")bin.\n");
    
}

float mul(){
    float a,m = 1;
    printf("Enter 1 to end!\n");
    do
    {
        printf("> ");
        scanf("%f",&a);
        m*=a;
    } while (a!=1);
    return m;
}

int main(){
    printf("\nWelcome to youCode calc\n");
    char ch;
    float a = 0,b = 0;
    int dec = 0; 
    
    do{
        printf("\n\t***** Menu *****\n");
        printf("+: for addition.\n");
        printf("-: for subtraction.\n");
        printf("*: for multiplication.\n");
        printf("/: for division.\n");
        printf("b: for binary conversion.\n");
        printf("\n >");
        ch = getch();
        printf("\n");
        switch (ch)
        {
        case '+':
            printf("S = %0.2f",add());
            break;
        case '-':
            printf("S = %0.2f",sub());
            break;
        case '*':
            printf("M = %0.2f",mul());
            break;
        case '/':
            _div();
            break;
        case 'b':
            printf("Enter a decimal number: ");
            scanf("%d",&dec);
            toBin(dec);
            break;
        case '0':exit(0);
        default:
            printf("Take a coffee and try a try again!\n");
            break;
        }
    } while (ch != '0');
    
}