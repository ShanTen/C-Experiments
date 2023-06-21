#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){

    FILE* ptr;
    char ch;

    ptr = fopen("swag.txt", "r");

    if(ptr == NULL){
        printf("Error opening file\n");
        exit(1);
    }


    //fgetc() reads a character from a file -- file get char 
    while((ch = fgetc(ptr)) != EOF){
        printf("%c", ch);
    }


    return 0;
}