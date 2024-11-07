#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int verifyPassword(char* string) {
    int size = strlen(string);
    int level = 0;
    //maiusculos, numeros, simbolos
    int verifier[] = {false,false,false};
    for(int i=0; i<size; i++) {
        char a = string[i];
        if(a >= 'A' && a <= 'Z' && verifier[0] == false) {
            verifier[0] = true;
            level++;
        }
        if(a >= '0' && a <= '9' && verifier[1] == false) {
            verifier[1] = true;
            level++;
        }
    }
    return level;
}

int main(int argc, char *argv[]) {
    int result = verifyPassword(argv[1]);
    if(result == 0) {
        printf("muito fraco\n");
    } else if (result == 1) {
        printf("fraco\n");
    } else if (result == 2) {
        printf("bom\n");
    } else {
        printf("muito bom\n");
    }

    return 0;
}