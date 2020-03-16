#include "shopping_basket.hpp"
#include <vector>

float price(std::vector<ItemQuantity> items)
{
    float total_price = 0;
    int total_quantity = 0;
    for (auto & item : items) 
    {
        total_price += item.price_*item.quantity_;
        total_quantity += item.quantity_;
    }
    if (total_price > 300 && total_quantity == 1)
    {
        total_price -= 0.1*total_price;
    } 
    else if (total_price > 200 && total_quantity > 1)
    {
        total_price -= 0.075*total_price;
    } 
    else if (total_price > 150 && total_quantity > 1)
    {
        total_price -= 0.05*total_price;
    }
   
    return total_price;
}
