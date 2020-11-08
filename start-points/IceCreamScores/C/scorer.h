#ifndef CATEGORIZER_H
#define CATEGORIZER_H

enum IceCream
{
    strawberry, chocolate, vanilla
};

extern enum IceCream selection;

int getScore();
void updateSelection();

#endif //CATEGORIZER_H
