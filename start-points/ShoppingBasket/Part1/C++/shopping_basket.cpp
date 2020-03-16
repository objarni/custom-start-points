#include "shopping_basket.hpp"
#include <vector>

float price(std::vector<ItemQuantity> items)
{
    float total = 0;
    for (auto & item : items) 
    {
        total += item.price_*item.quantity_;
    }
     if (total > 200)
    {
        total -= 0.1*total;
    } 
    else if (total > 100)
    {
        total -= 0.05*total;
    }
   
    return total;
}
