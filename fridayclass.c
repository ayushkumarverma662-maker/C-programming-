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


#include<stdio.h>
int main(){
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;


} 