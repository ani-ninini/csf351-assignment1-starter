#include <sys/types.h>
// #include <sys/ipc.h>
// #include <sys/shm.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
// #include <sys/wait.h>
// Include any other libraries that you might use.

// All your imports go here.
// For example if you have a file: `src/nfa.h`
// import it as: #include "nfa.h"

// void

int main(int argc, char *argv[])
{
    // Read all input from stdin and write all output to stdout.
    FILE *outputFile;
    outputFile = fopen("output.txt", "w");
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        return 0;
    }
    // Your code goes here...
    int n;
    fscanf(inputFile, "%d", &n);
    char tempc; // \n
    fscanf(inputFile, "%c", &tempc);
    // fscanf(inputFile, "%c", &tempc);
    int size = 0;
    char inputs[100];
    char ch;
    while (!feof(inputFile))
    {
        ch = fgetc(inputFile);
        inputs[size] = ch;
        size++;
        // printf("%c", ch);
    }
    // printf("%d",n);

    bool *endReached = mmap(NULL, sizeof *endReached, PROT_READ |
                             PROT_WRITE, MAP_SHARED | 
                             MAP_ANONYMOUS, -1, 0);
    return 0;
    if(fork()==0)
    {
        //1st child
        printf("xd");
    }
    else
        wait(NULL);
}