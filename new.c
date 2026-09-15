/*GRADING THROUGH THE SCORE*/

/*
#include <stdio.h>
int main() {
    
    float score;


    printf("enter score");
    scanf("%f", &score);

    if(score <= 40)
    {
        printf("fail");
    }
    else if (41 >= score && score <= 60)
    {
        printf("C");
    }
    else if (61 >= score && score <= 90)
    {
        printf("B");
    }
    else{
        printf("A");
    }
    
    return 0;


}
    */

/*WRITE A PROGRAM TO CHECK WHEATHER A NUMBER IS DIVISIBLE BY 2,3*/
/*
#include <stdio.h>
int main(){
    int A;

    printf("enter a number");
    scanf("%d",&A);

    if (A % 2 == 0){
        printf("Divisible by 2");
    }
    else if (A % 3 == 0){
        printf("Divisible by 3");
    
    }
    else{
        printf("not divisible by 2,3");
    }

    return 0;



}
    */

/* NUMBER DIVISIBLE BY 3*/
/*
#include <stdio.h>
int main(){
    int A;

     printf("enter a number");
    scanf("%d",&A);

    if (A % 3 == 0){
        printf("Divisible by 3");

    }
    else{
        printf("Not divisible");
    
    }

    return 0;

}

*/
/*Finding vowels*/

/*
#include <stdio.h>

int main(){
    char variable;

    printf("enter alphabet");
    scanf("%c",&variable);

    if (variable == 'a'||'e'||'i'||'o'||'u'){
        printf("this is vowel");
    }
        else{
            printf("this is not");

        }
    return 0;

}