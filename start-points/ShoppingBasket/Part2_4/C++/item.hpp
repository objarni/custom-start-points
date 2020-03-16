#ifndef ITEM_INCLUDED
#define ITEM_INCLUDED

class ItemQuantity
{
public:
    int quantity_;
    float price_;
    ItemQuantity(int quantity, float price): quantity_(quantity), price_(price){}; 
};

#endif
