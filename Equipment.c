//
// Created by Benjamin Pinter on 6/28/21.
//
#include "GameAssets.c"

//Initialize Equipment with Name && Stats, with multiplier set to 1. I don't think
//  we'll end up factoring in equipment stat multipliers, so we can just default them to some value.
Equipment GenerateEquip(const char* Name, int Str, int Dex, int Luk, int Int){
    return (Equipment){
            .Name = Name,
            .Stats = {
                    {
                            .Type = Strength,
                            .Total = Str,
                            .Multiplier = 1.00
                    },
                    {
                            .Type = Dexterity,
                            .Total = Dex,
                            .Multiplier = 1.00
                    },
                    {
                            .Type = Intelligence,
                            .Total = Int,
                            .Multiplier = 1.00
                    },
                    {
                            .Type = Luck,
                            .Total = Luk,
                            .Multiplier = 1.00
                    }
            }
    };
}