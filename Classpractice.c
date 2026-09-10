/*  IN TWO NUMBER WHICH IS HIGHEST NUMBER */
/*
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
         printf("%d is the largest number.\n", a);
         } 
        else if (b > a) {
         printf("%d is the largest number.\n", b);
          } 
        else {
         printf("Both numbers are equal.\n");
         }

    return 0;
}
    
*/


/* Write the program to check wheather a number is divisible by 5 or not*/

/*
#include <stdio.h>

int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a % 5 == 0)
    {
        printf("the number is divisible");
        }
          else {
          printf("not divisible by 5");
        }

    
    return 0;

}

*/

/*WIRTE A PROGRAM TO CHECK WHEATHER A NUMBER IS EVEN OR ODD*/

/*

#include <stdio.h>

int main(){
    int x ;

    printf("enter a number");
    scanf("%d",&x);

    if(x % 2 == 0){
        printf("even Number");
        }
          else{
          printf("odd nunber");
        }

        return 0;

    }
 */
    




    /* WRITE THE PROGRAM OF TEMPERATURE INPUT*/


/*
    #include <stdio.h>

    int main(){

        float Temperature;
        printf("enter Temperature");
        scanf("%f", &Temperature);

        if (Temperature > 10){
            printf("cold");
            }
            else if(Temperature >= 10 && Temperature <= 25){
                printf("plesant");
            }
            else{
                printf("hot");}

                return 0;

            
    }

               
    */



/* ENTERING SCORE*/


#include <stdio.h>
int main(){
    float score;

    printf("enter score");
    scanf("%f",&score);

    if(score<40){
        printf("fail");
    }
    else if (score >= 40 && score <= 60){
        printf("c");
    }
    else { 
        printf("best scorer");
    }
    return 0;
}
    

    