/*
Simple C program to create the skeleton of a C project.
input: file path to the where the directory should be created
output: directory with the name of the file path and the skeleton of the project inside it.
*/
#include <stdio.h>

typedef struct Project {
    char *name;
    char *path;
    enum Lang lang;
}Project;   

enum Lang{
    JS,
    GO,
    C
};

int main(int argc, char *argv[]) {
    char **options;
    char **non_options;
    FILE *fptr;
    Project *pPtr;
    //Index starts at 1, because first argument returned should be app name
    for (int i = 1; i < argc; i++){
        if (i+1 >= argc){
            break;
        }
        switch (*argv[i])
        {
        case '-n':
            pPtr->name = argv[i+1];
            break;
        case '-p':
            pPtr->path = argv[i+1];
        }
    }
    
    fptr = fopen(*pPtr->path + *pPtr->name,"w");



    return 0;
}



