#include "GameAssets.c"

Hero setupHunter(Hero h){
    h.Level = 1;
    h.Job = Hunter;

    h.Strength = (Stat) {
            .Total = 2,
            .Multiplier = 1.02,
            .Type = Strength
    };

    h.Dexterity = (Stat) {
            .Total = 5,
            .Multiplier = 1.03,
            .Type = Dexterity
    };

    h.Intelligence = (Stat) {
            .Total = 1,
            .Multiplier = 1.00,
            .Type = Intelligence
    };

    h.Luck = (Stat) {
            .Total = 1,
            .Multiplier = 1.01,
            .Type = Luck
    };

    h.Health = (Bar) {
            .Current = 75,
            .Max = 75
    };

    h.Mana = (Bar) {
            .Max = 25,
        .Current = 25
    };

    return h;
}
