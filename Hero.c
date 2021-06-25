#include "GameAssets.c"
#include "Warrior.h"
#include "Mage.h"
#include "Thief.h"
#include "Hunter.h"

Hero SetupNewHero(Profession profession) {
    Hero h;
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
