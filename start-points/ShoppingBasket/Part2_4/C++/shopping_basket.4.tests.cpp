#include "shopping_basket.hpp"
#include "item.hpp"
#include <gtest/gtest.h>
#include <vector>

using namespace ::testing;

TEST(ShoppingBasket, Price_boundaries)
{
    std::vector<ItemQuantity> items = {};
    ASSERT_NEAR(0, price(items), 0.01);
    items.push_back(ItemQuantity(1,50));
    ASSERT_NEAR(50, price(items), 0.01);
    items.push_back(ItemQuantity(1,50));
    ASSERT_NEAR(100, price(items), 0.01);
    items.push_back(ItemQuantity(1,50));
    ASSERT_NEAR(150-7.5, price(items), 0.01);
    items.push_back(ItemQuantity(1,50));
    ASSERT_NEAR(200-10, price(items), 0.01);
    items.push_back(ItemQuantity(1,50));
    ASSERT_NEAR(250-25, price(items), 0.01);
}
