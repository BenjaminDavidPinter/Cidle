#include "GameAssets.c"
#include <stdlib.h>
#include <stdio.h>

char* BarToStr(Bar b, int MaxSteps){
    int approxCurrentSteps = b.Current/b.Max*100;
    char *bar = malloc(MaxSteps+2);
    bar[0] = '[';
    for (int i = 1; i <= MaxSteps; ++i) {
        if(i<approxCurrentSteps){
            bar[i] = '-';
        } else {
            bar[i] = ' ';
        }
    }
    bar[MaxSteps+1] = ']';
    bar[MaxSteps+2] = '\n';
    return bar;
}

void PrintHero(Hero h){
    printf("Name: \t%s\n", h.name);

    char* healthBar = BarToStr(h.Health, 50);
    printf("Health : \t%s", healthBar);
    free(healthBar);

    char* manaBar = BarToStr(h.Mana, 20);
    printf("Mana   : \t%s", manaBar);
    free(manaBar);

    printf("\tStr: \t%d\n", h.Strength.Total);
    printf("\tDex: \t%d\n", h.Dexterity.Total);
    printf("\tInt: \t%d\n", h.Intelligence.Total);
    printf("\tLuk: \t%d\n", h.Luck.Total);

    int equipmentArraySize = sizeof(h.Equips)/sizeof(h.Equips[0]);
    for (int i = 0; i < equipmentArraySize; ++i) {
        printf("%s", h.Equips[i].Name);
    }
}