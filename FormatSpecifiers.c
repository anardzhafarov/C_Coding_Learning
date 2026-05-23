#include <stdio.h>

int main(){

    int age = 20;
    float price = 19.99;
    double pi = 3.1415926535;
    char name[] = "Anar Dzhafarov";

    /* printf("%f", pi);
    printf("%lf", pi);
    scanf("%lf\n", pi); // user input. only lf works for doubles */

    /* INTEGERS
    // SETTING WIDTH

    int num1 = 1;
    int num2 = 11;
    int num3 = 111;

    // putting a number between the procent and the letter sets up the number of elements to print. right-alighnemnt is used. 
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    // for left alignment put a minus sign before the number
    printf("%-4d\n", num1);
    printf("%-4d\n", num3);

    // to add leading zeros
    printf("%04d\n", num3);
    printf("%04d\n", num3);
    printf("%04d\n", num3);

    // to show the sign of the number
    int num3 = -111;
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3); */

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    // Precision

    printf("%.1f\n", price1); // OUTPUT GETS ROUNDED
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    // Width and Precision
    printf("%7.1f\n", price1); // OUTPUT GETS ROUNDED
    printf("%7.2f\n", price2);
    printf("%7.2f\n", price3);


    return 0;
}