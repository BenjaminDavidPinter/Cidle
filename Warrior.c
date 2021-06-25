#include "GameAssets.c"

Hero setupWarrior(Hero h){
    h.Level = 1;
    h.Job = Warrior;

    h.Strength = (Stat) {
            .Total = 5,
            .Multiplier = 1.05
    };

    h.Dexterity = (Stat) {
            .Total = 2,
            .Multiplier = 1.01
    };

    h.Intelligence = (Stat) {
            .Total = 1,
            .Multiplier = 1.00
    };

    h.Luck = (Stat) {
            .Total = 1,
            .Multiplier = 1.00
    };

    h.Health = (Bar) {
            .Current = 100,
            .Max = 100
    };

    h.Mana = (Bar) {
            .Max = 10,
            .Current = 10
    };

    return h;
}