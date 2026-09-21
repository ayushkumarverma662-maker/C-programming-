 // TRAFFIC LIGHT FOR SIGNALS
 
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