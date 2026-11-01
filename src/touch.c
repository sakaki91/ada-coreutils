#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *new_file;
    if (argc < 2){
        puts("usage: touch <file>");
    } else {
        for(int i = 1; i < argc; i++){
            new_file = fopen(argv[i], "a");
            if (new_file == NULL){
                perror("touch");
                exit(EXIT_FAILURE);
            }
            fclose(new_file);
        }
    }
    return 0;
}
