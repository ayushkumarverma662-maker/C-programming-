// FOR PRINT NUMBER 1 TO 10
/*
#include <stdio.h>
int main() {
   int i;

    for(i=1;i<=10;i++){
        printf("%d",i);
    }
    return 0;
}
*/


// FOR EVEN NUMBER BETWEEN 1 TO 20

/*
#include <stdio.h>
int main() {
    int i;

    for(i=2;i<=20;i+=2){
        printf("%d",i);
    }
    return 0;
}
    */


    // FOR ODD BETWEEN 1 TO 19

    /*
    #include <stdio.h>
int main() {
    int i;

    for(i=1;i<=19;i+=2){
        printf("%d",i);
    }
    return 0;
}
*/


// FOR REVERSE NUMBER 1 TO 10

/*
#include <stdio.h>
int main() {
   int i;

    for(i=10;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
    */

    // WAP TO PRINT MULTIPLICATION TABLE OF n
/*
    #include <stdio.h>
    int main() {
        int n, i;

        printf("Enter the Number");
        scanf("%d",&n);
        
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
    */

// 1 se laga ke jaha tk mood vhaa tk ka sum nikalna

/*
#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
} 
*/

// FOR FACTORIAL
/*
#include <stdio.h>

int main () {
    int n, fact = 1;
    printf("Enter the number");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
             fact *= i;
    }printf("Factorial = %d",fact);
    return 0;
}
*/


//FOR PRINTING THE PATTERN

/*
#include<stdio.h>
int main(){
    for (int i = 1; i <= 50; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

    

    // Writing a program using While loop to sun of the value 1 to n
/*
    #include<stdio.h>
    
    int main(){
    int i = 1, sum = 0;

        printf("Enter a number");
        scanf("%d",&i);
        {}
         while (i <= 10){
            sum = sum + i;
            i++;
         }
         printf("Sum =%d",sum);

         return 0;

    }
*/
/*
    #include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Sum %d = %d\n", n, sum);

    return 0;
}*/

// Reverse of Any number

/*
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original = n; // keep original for display

    while (n != 0) {
        remainder = n % 10;         // extract last digit
        reversed = reversed * 10 + remainder;  // append it to reversed
        n = n / 10;                 // remove last digit
    }

    printf("Reversed number of %d = %d\n", original, reversed);

    return 0;
}
    */
/*
    #include<stdio.h>
int main(){
    int i,j,space;
    for(i=1;i<=3;i++){
        for (space = 1; space <= 4 -i +1)
    }


    for (int i = 1; i <= 50; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;


} */


// LIKE PYRAMIOD SHAPE WITH SPACE

/*
#include<stdio.h>
int main(){
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // print spaces first
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // print stars
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 
    */
/*
#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        // print spaces first
        for (int j = 1; j <= 50 - i; j++)
        {
            printf(" ");
        }
        // then print stars
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// WRITE A PROGRAM TO REVERE A NO USING WHILE LOOP
/*
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // keep original for display

    while (num != 0) {
        remainder = num % 10;      // get the last digit
        reversedNum = reversedNum * 10 + remainder; // append it to reversed number
        num /= 10;                 // remove the last digit
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
*/


// PRINTING NUMBER IN PATTERN

/*
#include<stdio.h>
int main(){
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

  // WAP TO PRINT MULTIPLICATION TABLE OF n
/*
    #include <stdio.h>
    int main() {
        int n, i;

        printf("Enter the Number");
        scanf("%d",&n);
        
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}*/


// WAP to to print N and then the Square of N

/*
#include <stdio.h>
    int main() {
        int  i;
        
    for (i = 1; i <= 10; i++) {
        printf("%d %d\n",i,i*i);
    }

    return 0;
}
    */

// WAP to make a calculator using Switch case;
/*
#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("%.2f\n", a + b); break;
        case '-': printf("%.2f\n", a - b); break;
        case '*': printf("%.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("%.2f\n", a / b);
            else printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}*/
/*
#include <stdio.h>

int main() {
    int rows, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main() 
{
    int i, j, num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}*/
/*
#include <stdio.h>

int main()
{
    int a, b, num;
    printf("enter number: ");
    scanf("%d",&a);
    b = a + 5;
    
    printf("ayush:%d",b);
    return 0 ;
}
*/

/*
#include <stdio.h>

// Function to calculate the sum of marks in three subjects
int calculateSum(int physics, int maths, int english) {
    return physics + maths + english;
}

int main() {
    int physics, maths, english, total;

    for (int i = 1; i <= 3; i++) {
        printf("\nEnter marks for Student %d\n", i);

        printf("Physics: ");
        scanf("%d", &physics);

        printf("Maths: ");
        scanf("%d", &maths);

        printf("English: ");
        scanf("%d", &english);

        total = calculateSum(physics, maths, english);

        printf("Total marks of Student %d = %d\n", i, total);
    }

    return 0;
}
*/
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}