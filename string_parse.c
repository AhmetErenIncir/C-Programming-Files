#include <stdio.h>
#include <string.h>


int main(){
    char s1[30]= "Gebze Technical University";
    char buffer[5][30];
    int i=0 , j =0 , k=0;
    while(s1[i]!='\0'){
        if(s1[i]==' '){
            buffer[j][k] = '\0';
            j++;
            k=0;
            i++;
        }
        else{
            buffer[j][k] = s1[i];
            k++;
            i++;
        }
    }
    for(i=0 ; i<=j ; i++){
        printf("%s",buffer[i]);
        printf("\n");
    }
}
