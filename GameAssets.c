#ifndef GAMEASSETS_H
#define GAMEASSETS_H
typedef enum Profession {
    Warrior = 0,
    Hunter = 1,
    Mage = 2,
    Thief = 3
} Profession;

typedef struct Bar{
    int Max;
    int Current;
} Bar;

typedef struct Stat {
    int Total;
    float Multiplier;
} Stat;

typedef struct Hero {
    char name[20];
    int Level;
    Profession Job;
    Bar Health;
    Bar Mana;
    Stat Strength;
    Stat Dexterity;
    Stat Intelligence;
    Stat Luck;
} Hero;

#endif