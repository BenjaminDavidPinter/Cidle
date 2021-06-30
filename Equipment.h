#ifndef EQUIPMENT_H
#define EQUIPMENT_H
Equipment GenerateEquip(const char* Name, int Str, int Dex, int Luk, int Int);
#define BEGINNER_HAT GenerateEquip("Beginner Hat", 1, 1, 1, 1)
#define BEGINNER_CHEST GenerateEquip("Beginner Chest", 1, 1, 1, 1)
#define BEGINNER_GLOVES GenerateEquip("Beginner Gloves", 1, 1, 1, 1)
#define BEGINNER_PANTS GenerateEquip("Beginner Pants", 1, 1, 1, 1)
#define BEGINNER_SHOES GenerateEquip("Beginner Shoes", 1, 1, 1, 1)
#endif