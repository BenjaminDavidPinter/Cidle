#include "GameAssets.c"
#include "Warrior.h"
#include "Mage.h"
#include "Thief.h"
#include "Hunter.h"
#include <stdlib.h>
#include <string.h>

Hero SetupNewHero(Profession profession, char* name) {
    Hero h;
    strcpy(h.name, name);
    switch (profession) {
        case Warrior:
            return setupWarrior(h);
        case Hunter:
            return setupHunter(h);
        case Mage:
            return setupMage(h);
        case Thief:
            return setupThief(h);
    }

    return h;
}
