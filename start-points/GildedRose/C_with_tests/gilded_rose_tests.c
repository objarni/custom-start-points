#include <cgreen/cgreen.h>
#include "gilded_rose.h"

#define MAX_ITEM_DESCRIPTION_LENGTH 100

Describe(gilded_rose);
BeforeEach(gilded_rose) {}
AfterEach(gilded_rose) {}

char description[MAX_ITEM_DESCRIPTION_LENGTH];
    
static void do_update_quality(char* name, int sellIn, int quality, char* description) {
    Item items[2];
    init_item(items, name, sellIn, quality);
    update_quality(items, 1);
    print_item(description, &items[0]);
}

Ensure(gilded_rose, normal_item_quality_is_never_negative) {
    int sellIn = 0;
    int quality = 0;
    do_update_quality("Foo", sellIn, quality, description);
    assert_that("Foo, sellIn: -1, quality: 0", is_equal_to_string(description));
}
