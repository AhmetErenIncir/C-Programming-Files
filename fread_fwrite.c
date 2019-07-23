#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student{
    int number;
    char name[20];
}student_t;

int main(){
    student_t std;
    FILE *fptr;
    fptr = fopen("fwrite.txt" , "wb");
    if(fptr == NULL){
        printf("Error\n");
    }
    else{
        printf("Enter the student number\n");
        scanf("%d",&std.number);
        printf("Enter the name of student\n");
        scanf("%s",std.name);
        //gets(std.name);
        fwrite(&std,sizeof(student_t),1,fptr);
        fclose(fptr);
    }
    fptr = fopen("fwrite.txt" , "rb");
    if(fptr == NULL){
        printf("Error\n");
    }
    else{
        fread(&std,sizeof(student_t),1,fptr);
        printf("Number : %d\n",std.number);
        printf("Name : %s\n",std.name);
    }
}
