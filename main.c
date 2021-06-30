#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GameAssets.c"
#include "Warrior.h"
#include "Hunter.h"
#include "Mage.h"
#include "Thief.h"
#include "Hero.h"
#include "OutputFuncs.h"

int main() {
    printf("Select a class from the following list\n");
    printf("\t1. Warrior\n");
    printf("\t2. Hunter\n");
    printf("\t3. Mage\n");
    printf("\t4. Thief\n");

    int choice = 0x30;

    while(choice < 0x31 || choice > 0x34){
        choice = getchar();
    }

    printf("And what is your Character's Name? (Limit 20 characters)\n");

    //Do clean memory allocation.
    char* name = calloc(20, sizeof(char));
    short counter = 0;

    //Remove the /n from the above read. Clears the terminal for the next read.
    getchar();
    int nameChar = 0;
    while((nameChar = getchar()) != '\n'){
        name[counter] = nameChar;
        counter++;
    }

    //strcopy of name happens here, can release after.
    Hero h = SetupNewHero(atoi(&choice), name);
    free(name);
    PrintHero(h);

    return 0;
}
