#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]){
    if (argc < 2){
        puts("usage: mkdir <directory>");
    } else {
        for (int i = 1; i < argc; i++){
            if (mkdir(argv[i], 0755) == -1){
                perror("mkdir");
		exit(EXIT_FAILURE);
            }
        }
    }
    return 0;
}
