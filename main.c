#include <stdio.h>
#include <stdbool.h>


int main() {
    
    // This is my first program! :)

    /*
    this
    is
    also
    a 
    comment*/

    /* INTEGERS = 4 bytes 
    printf("I like Pizza!\n");
    printf("It's really good!\n");

    int age = 25.5;
    int year = 2026;
    int quantity = 1;

    
    printf("You have ordered %d x items\n", quantity);
    printf("The year is %d\n", year);
    printf("You are %d years old", age); */ 

    /* FLOATS = 4 bytes
    float gpa = 2.5;
    float price = 19.99;
    float temp = -10.1;

    printf("Temperature is %.1f°C\n", temp);

    printf("The price is $%.2f\n", price);

    printf("Your gpa is %f\n", gpa);  // gives 6 digits after the decimals when working with floats
    // put a dot and number of digits after the procent to change that
    printf("Your gpa is %.1f\n", gpa); */

    /* DOUBLES = 8 bytes
    double pi = 3.14159265358979; // in doubles you can store 15-16 digits after the decimal point
    printf("The value of pi is %.15lf", pi);
 */

    /* CHAR = 1 byte
    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency); */

    /* STRING = ARRAY OF CHARS
    char name[] = "Anar Dzhafarov";
    char food[] = "pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email); */

    /* BOOLEAN = HAVE TO INDCLUDE STDBOOL.H = 1 byte
    bool isOnline = false;
    bool isStudent = true;

    printf("%b\n", isOnline);
    if(isStudent){
        printf("You are a STUDENT");
    } else {
        printf("You are NOT a STUDENT");
    } */

    return 0;
}