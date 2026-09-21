// BASIC PROGRAM STRUCTURE

#include <stdio.h>

int main() {
    printf("Hello World");

    return 0;
}


// FOR COMMENTS

//   Ye single-line comment hai

/*
   Ye multi-line
   comment hai
*/


VARIABLE AND DATATYPE

int       // whole numbers
float     // decimal numbers
double    // high-precision decimal numbers
char      // single character

char symbol = '$';
char name[] = "Ayush";
const float PI = 3.14;
#define PI 3.14
#define MAX 100


FOR PRINT 

printf("Hello");
printf("Age = %d", age);
printf("Price = %.2f", price);
printf("Grade = %c", grade);


// INPUT LENE KE LIYE scanf() KA USE KRTE H

FOR INTEGER VALUE

int age;
scanf("%d", &age);

FOR DECIMAL VALUE

float price;
scanf("%f", &price);

FOR STRING

char name[50];
scanf("%s", name);  // STRING ME STRING VALUE KE SATH & NI LGTA HA

2 WORDS KE BICH ME GAP YA NEXT LINE KE LIYE 

\n   // new line
\t   // tab
\\   // backslash
\"   // double quote
\'   // single quote



AIRTHMATIC OPERATORS

int a = 10, b = 3;

printf("%d", a + b);   +   // addition
printf("%d", a - b);   -   // subtraction
printf("%d", a * b);   *  // multiplication
printf("%d", a / b);   /  // division
printf("%d", a % b);   %  // remainder



ASSIGNMENT OPERATORS

int x = 10;

x += 5;  // x = x + 5
x -= 5;  // x = x - 5
x *= 5;  // x = x * 5
x /= 5;  // x = x / 5
x %= 5;  // x = x % 5



RELATIONAL OPERATORS

a == b   // equal to
a != b   // not equal to
a > b    // greater than
a < b    // less than
a >= b   // greater than or equal to
a <= b   // less than or equal to



LOGICAL OPERATORS

&&   // AND
||   // OR
!    // NOT



INCREMENT AND DECREMENT

int x = 5;

x++;  // x = x + 1
x--;  // x = x - 1


