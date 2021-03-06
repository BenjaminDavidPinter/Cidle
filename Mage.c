#include "GameAssets.c"

Hero setupMage(Hero h){
    h.Level = 1;
    h.Job = Mage;

    h.Strength = (Stat) {
            .Total = 1,
            .Multiplier = 1.00,
            .Type = Strength
    };

    h.Dexterity = (Stat) {
            .Total = 1,
            .Multiplier = 1.00,
            .Type = Dexterity
    };

    h.Intelligence = (Stat) {
            .Total = 5,
            .Multiplier = 1.06,
            .Type = Intelligence
    };

    h.Luck = (Stat) {
            .Total = 2,
            .Multiplier = 1.00,
            .Type = Luck
    };

    h.Health = (Bar) {
            .Current = 25,
            .Max = 25
    };

    h.Mana = (Bar) {
            .Max = 100,
            .Current = 100
    };

    return h;
}
