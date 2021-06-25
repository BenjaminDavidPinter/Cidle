#include "GameAssets.c"

Hero setupHunter(Hero h){
    h.Level = 1;
    h.Job = Hunter;

    h.Strength = (Stat) {
            .Total = 2,
            .Multiplier = 1.02
    };

    h.Dexterity = (Stat) {
            .Total = 5,
            .Multiplier = 1.03
    };

    h.Intelligence = (Stat) {
            .Total = 1,
            .Multiplier = 1.00
    };

    h.Luck = (Stat) {
            .Total = 1,
            .Multiplier = 1.01
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
