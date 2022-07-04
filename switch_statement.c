#include <stdio.h>
#include <stdlib.h>

int main(){


    char grade = 'D';

    switch (grade){
        case 'A':
            printf("You did great!!!");
            break;

        case 'B':
            printf("You did Good!!!");
            break;

        case 'C':
            printf("You did poorly!!!");
            break;

        case 'D':
            printf("You did very bed!!!");
            break;

        case 'F':
            printf("You Failed!!!");
            break;
        
        default:
            printf("Error!!!");
    }

    return 0;
}