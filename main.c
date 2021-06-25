#include <stdio.h>
#include <stdlib.h>
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

    char choice;

    while(choice != '1'
          && choice != '2'
          && choice != '3'
          && choice != '4'){
        choice = getchar();
    }

    Hero h = SetupNewHero(atoi(&choice));
    PrintHero(h);

    return 0;
}
