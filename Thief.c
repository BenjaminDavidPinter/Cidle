#include "GameAssets.c"

Hero setupThief(Hero h){
    h.Level = 1;
    h.Job = Thief;

    h.Strength = (Stat) {
            .Total = 1,
            .Multiplier = 1.01,
            .Type = Strength
    };

    h.Dexterity = (Stat) {
            .Total = 2,
            .Multiplier = 1.03,
            .Type = Dexterity
    };

    h.Intelligence = (Stat) {
            .Total = 3,
            .Multiplier = 1.00,
            .Type = Intelligence
    };

    h.Luck = (Stat) {
            .Total = 3,
            .Multiplier = 1.03,
            .Type = Luck
    };

    h.Health = (Bar) {
            .Current = 50,
            .Max = 50
    };

    h.Mana = (Bar) {
            .Max = 30,
            .Current = 30
    };

    return h;
}
