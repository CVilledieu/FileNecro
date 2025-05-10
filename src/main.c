/*
Simple C program to create the skeleton of a C project.
input: file path to the where the directory should be created
output: directory with the name of the file path and the skeleton of the project inside it.
*/
#include <stdio.h>

void printHelp();

typedef struct flags{
    
}pFlags;

int main(int argc, char *argv[]) {
    //char **options;
    //char **non_options;
    //FILE *fptr;
    //Project *pPtr;
    //Index starts at 1, because first argument returned should be app name
    for (int i = 1; i < argc-1; i++){
        if (argv[i][0] == '-' && (argv[i][1] == 'h' || argv[i][1] == 'H')){
            printHelp();
            return 0;
        }
    }
    


    return 0;
}



void printHelp(){
    char *msg[] ={
        "HELP:",
        "\nCommands:\n",
        "\nFlags:\n"
    };
    int msgCount = sizeof(msg) / sizeof(msg[0]);
    for (int i = 0; i < msgCount; i++){
       printf("%s\n", msg[i]); 
    }
    return;   
}