#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

#define MAXLI 2048

char cmd[MAXLI];
char path[MAXLI];
int pathidx;

void mbash();

int main(int argc, char** argv) {
    while (1) {
        printf("Commande: ");
        fgets(cmd, MAXLI, stdin);
        mbash();
    }
    return 0;
}

void mbash() {
    system(cmd);

    printf("Exec: %s", cmd);
        
    if (strcmp(cmd,"cd") == 0) {
        printf("cd");
    }



}