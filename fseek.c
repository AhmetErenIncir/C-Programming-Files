#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("fseek.txt","r");
    fseek(ptr,-3,SEEK_END);
    printf("%ld", ftell(ptr));
    fclose(ptr);
}
