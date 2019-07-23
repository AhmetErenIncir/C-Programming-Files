#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *ptr;

    ptr = fopen("file.txt" , "a");

    if(ptr == NULL){
        printf("File cannot open\n");
    }
    else{
        char ch = 'w';
        putc(ch,ptr);

        char *s1 = "ahmet eren";
        int i = 0;
        while(*(s1+i) != '\0'){
            putc(*(s1+i) , ptr);
            i++;
        }
    }


}
