/*

#include <stdio.h>

    int main() {
   char light;
    
    printf("enter the colour of the light");
    scanf("%c",&light);

    switch (light)
    {
    case 'Yellow' :
    printf("you have to wait");
        break;
    case 'Green':
    printf("You can Go");
    break;
    case 'Red' :
    printf("Stop");
    break;

    default:
    printf("invalid colour");
        break;
    }
    return 0;

}
    */
/*
    #include <stdio.h>

    int main() {
   char Letter;
    
    printf("enter Alphabet");
    scanf("%c",&Letter);

    switch (Letter)
    {
    case 'A' :
    case 'a' :
    case 'E' :
    case 'e' :
    case 'I' :
    case 'i' :
    case 'O' :
    case 'o' :
    case 'U' :
    case 'u' :
    printf("its a vowel");
        break;

    default:
    printf(" it's not the vowel");
        break;
    }
    return 0;

}
    */
// CHECKING VOWEL


    #include <stdio.h>

    int main() {
   char Letter;
    
    printf("enter Alphabet");
    scanf("%c",&Letter);

    switch (Letter)
    {
    case 'A' :
    printf("Excellent");
    break;

    case 'B' :
    printf("Good");
    break;
    
    case 'C' :
    printf(" Average");
    break;
       
    case 'D':
    printf("Fail");
    break;

    default:
    printf("Invalid");
        break;
    }
    return 0;

}
    
