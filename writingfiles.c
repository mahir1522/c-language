#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE * fpointer = fopen("main.txt", "a");

    fprintf(fpointer, "\nI hope you are doing well");

    fclose(fpointer);
   return 0;
}