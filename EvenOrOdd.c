#include <stdio.h>
#include <string.h>

int main(){
    int number;
    printf("Number: ");
    scanf("%d", &number);

    if (number%2 == 0){
        printf("Even");

    }else{
        printf("Odd");
    }
    return 0;
    }
    
