#include <string.h>
#include <stdlib.h>
#include "GameAssets.c"
#include "Equipment.h"


Hero setupWarrior(Hero h){
    h.Level = 1;
    h.Job = Warrior;

    h.Strength = (Stat) {
            .Total = 5,
            .Multiplier = 1.05,
            .Type = Strength
    };

    h.Dexterity = (Stat) {
            .Total = 2,
            .Multiplier = 1.01,
            .Type = Dexterity
    };

    h.Intelligence = (Stat) {
            .Total = 1,
            .Multiplier = 1.00,
            .Type = Intelligence
    };

    h.Luck = (Stat) {
            .Total = 1,
            .Multiplier = 1.00,
            .Type = Luck
    };

    h.Health = (Bar) {
            .Current = 100,
            .Max = 100
    };

    h.Mana = (Bar) {
            .Max = 10,
            .Current = 10
    };

    memcpy(&h.Equips,
           (Equipment[5]){
                BEGINNER_CHEST,
                BEGINNER_GLOVES,
                BEGINNER_HAT,
                BEGINNER_PANTS,
                BEGINNER_SHOES
            },
    sizeof(Equipment) * 5);

    return h;
}