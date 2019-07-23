#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *ptr;

    ptr = fopen("file.txt" , "r");

    if(ptr == NULL){
        printf("File cannot open\n");
    }
    else{
        char s[100];
        char ch;
        int i = 0;
        // ch = fgetc(ptr);
        // printf("%c\n",ch);
        while(!feof(ptr)){
            s[i] = fgetc(ptr);
            i++;
            // ch = fgetc(ptr);
            // printf("%c",ch);
        }
        printf("%s",s);
    }


}
