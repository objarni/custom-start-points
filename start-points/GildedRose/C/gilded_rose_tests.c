#include <cgreen/cgreen.h>
#include "gilded_rose.h"

Describe(gilded_rose);
BeforeEach(gilded_rose) {}
AfterEach(gilded_rose) {}

Ensure(gilded_rose, update_quality) {
    Item items[2];
    init_item(items, "Foo", 0, 0);
    update_quality(items, 1);
    assert_that("fixme", is_equal_to_string(items[0].name));
}
