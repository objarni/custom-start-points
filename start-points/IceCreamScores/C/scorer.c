#include <stdlib.h>

#include "scorer.h"

enum IceCream selection;

int getScore() {
    switch (selection) {
        case strawberry:
            return 5;
        case chocolate:
            return 6;
        case vanilla:
            return 1;
        default:
            return -1;
    }
}

void updateSelection()
{
    //this will generate random number in range 0 - 3
    int randNum = (rand() % (4));
    selection = randNum;
}

