/*WRITE A CODE TO FIND THE GRATE THROUGH THE MARKS*/

/*
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
    */


    #include <stdio.h>

    int main() {
   char light;
    
    printf("enter the colour of the light");
    scanf("%c",&light);

    switch (light)
    {
    case 'Y' :
    printf("you have to wait");
        break;
    case 'G':
    printf("You can Go");
    break;
    case 'R' :
    printf("Stop");
    break;

    default:
    printf("invalid colour");
        break;
    }
    return 0;

}