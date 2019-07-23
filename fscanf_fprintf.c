#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* ptr = fopen("fscanf.txt","r");
    if (ptr==NULL)
    {
        printf("no such file.");
        return 0;
    }
    else{
        char name[20];
        while(!feof(ptr)){
            fscanf(ptr,"%s",name);
        }
        printf("%s\n",name);
    }
}
