#ifndef GAMEASSETS_H
#define GAMEASSETS_H
typedef enum Profession {
    Warrior = 1,
    Hunter = 2,
    Mage = 3,
    Thief = 4
} Profession;

typedef enum StatType {
    Strength = 1,
    Dexterity = 2,
    Intelligence = 3,
    Luck = 4
} StatType;

typedef struct Bar{
    int Max;
    int Current;
} Bar;

typedef struct Stat {
    int Total;
    float Multiplier;
    StatType Type;
} Stat;

typedef struct Equipment {
    const char* Name;
    Stat Stats[4];
} Equipment;

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
    Equipment Equips[5];
} Hero;

#endif