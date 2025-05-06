/*
Simple C program to create the skeleton of a C project.
input: file path to the where the directory should be created
output: directory with the name of the file path and the skeleton of the project inside it.
*/
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>




int main(void){
    printf("Hello");
}

/*
char* getInput(char *out);
typedef struct project;

struct project{
    char *name;
    char *path;

};

int main(void) {
    char *res = NULL;
    
    do{
        res = getInput("Please provide the file path\n");
        if (res == NULL){

            printf("Invalid path\n");
        }
    }while(res == NULL);    

    return 0;
}

char* getInput(char *out){
    printf("%s\n", out);
    char buff[17], inp[17];
    int res = scanf("%16s", &inp);
    strncpy(buff, inp, sizeof(buff)-1);
    buff[sizeof(buff)-1] = '\0';
    const char *whiteList = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";
    if (strspn(buff, whiteList) == strlen(buff)){
        return &buff;
    }
    return NULL;

    
    */