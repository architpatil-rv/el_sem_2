#include <stdio.h>

int main(){

    char str[] = "Hello World";

    int dayNumber;

    printf("Enter the day number");
    printf("%d",5);
    scanf("%d",&dayNumber);
    
    switch(dayNumber){
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
        case 7: printf("Saturday"); break;
    }
    
    return 0;
}