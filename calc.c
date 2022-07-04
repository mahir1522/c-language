#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    if(op == '+' ){
        printf("%f", num1+num2);
    }else if (op == '-'){
        if (num1>num2){
            printf("%f", num1 - num2);
        }
        else if(num2>num1){
            printf("%f", num2 - num1);
        }
    }else if (op == '*'){
        printf("%f", num1 * num2);
    }else if (op == '/'){
        printf("%f", num1 / num2);
    }else{
        printf("error...");
    }
    return 0;

}