#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *read_file;
    char line_size[8192];
    if (argc < 2){
        puts("usage: cat <file>");
    } else {
        for(int i = 1; i < argc; i++){
            read_file = fopen(argv[i], "r");
            if(read_file == NULL){
                perror("cat");
                exit(EXIT_FAILURE);
            }
            while(fgets(line_size, sizeof(line_size), read_file) != NULL){
                printf("%s", line_size);
            }
            fclose(read_file);
        }
    }
    return 0;
}
